const bsconfig = require("./bsconfig.json");
const fs = require("fs");
const path = require("path");

const transpileModules = ["rescript"].concat(bsconfig["bs-dependencies"]);
const withTM = require("next-transpile-modules")(transpileModules);

const isWebpack5 = true;
const nextConfig = {
  target: "serverless",
  pageExtensions: ["jsx", "js"],
  env: {
    ENV: process.env.NODE_ENV,
  },
  sassOptions: {
    includePaths: [path.join(__dirname, 'styles')],
  },
  webpack: (config, options) => {
    const { isServer } = options;

    if (isWebpack5) {
      if (!isServer) {
        // We shim fs for things like the blog slugs component
        // where we need fs access in the server-side part
        config.resolve.fallback = {
          fs: false,
          path: false,
        };
      }

      // We need this additional rule to make sure that mjs files are
      // correctly detected within our src/ folder
      config.module.rules.push({
        test: /\.m?js$/,
        use: options.defaultLoaders.babel,
        exclude: /node_modules/,
        type: "javascript/auto",
        resolve: {
          fullySpecified: false,
        }
      });
    //   config.module.rules.push({
    //     test: /\.(jpe?g|png|gif|svg|pdf|ico)$/,
    //       use: [{
    //         loader: 'file-loader',
    //         options: {
    //           name: '[path][name]-[hash:6].[ext]'
    //         },
    //       }, ]
    //   });
    }
    return config
  },
  webpack5: isWebpack5,
  experimental:{esmExternals: 'loose'},
};

module.exports = withTM(nextConfig);