open WebGL;

[@bs.module]
external customVert: string = "../../../../public/Shaders/custom.vert";
[@bs.module]
external customFrag: string = "../../../../public/Shaders/custom.frag";

let materialJs: (three, string, string) => Three.material = [%bs.raw
  {|
    function(t, shaderVert, shaderFrag) {
        const speedLength = [0.35, 0.45, 0.65];
        const bandWidthLength = [0.003, 0.0025, 0.0015];
        const uniforms = {
            time: { value: 1.0 },
            r: { value: [0.05, 0.15, 0.20, 0.45, 0.825, 0.875, 0.95] },
            speed: {
                value: [
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                    speedLength[Math.floor(Math.random() * speedLength.length)],
                ]
            },
            bandWidth: {
                value: [
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                    bandWidthLength[Math.floor(Math.random() * bandWidthLength.length)],
                ]
            },
            color: { value: new t.Vector2(0, 0) },
            resolution: { value: new t.Vector2() }
        }

        const material = new t.ShaderMaterial({
            uniforms: uniforms,
            vertexShader: shaderVert.default,
            fragmentShader: shaderFrag.default,
            transparent: true,
        });
        return material;
    }
  |}
];

module LaserScene = {
  let t = three;

  let scene = [|Three.scene()|];

  [@bs.set]
  external set_time_of_material: (Three.valueFloat, float) => unit = "value";

  [@bs.get]
  external get_uniforms_of_material: Three.material => Three.uniforms =
    "uniforms";
  [@bs.get]
  external get_time_of_material: Three.uniforms => Three.valueFloat = "time";
  [@bs.get]
  external get_time_value_of_material: Three.valueFloat => float = "value";

  let geometry = (width, height) => Three.planeBufferGeometry(width, height);
  let material = materialJs(t, customVert, customFrag);

  let initScene = (width, height) => {
    scene[0] = Three.scene();
    let mesh = Three.mesh(geometry(width, height), material);
    Three.addMeshToScene(scene[0], mesh);
  };

  let animate = () => {
    set_time_of_material(
      material |> get_uniforms_of_material |> get_time_of_material,
      (
        material
        |> get_uniforms_of_material
        |> get_time_of_material
        |> get_time_value_of_material
      )
      +. 0.05,
    );
  };
};