#ifdef GL_ES
precision mediump float;
#endif 

#extension GL_OES_standard_derivatives : enable

uniform float time;
uniform float r[7];
uniform float speed[7];
uniform float bandWidth[7];
uniform vec2 mouse;
uniform vec2 resolution;
varying vec2 vUv;

void main( void ) {
	vec2 pos = -1. + 2. * vUv;
	float y = vUv.y;
	float x = vUv.x;
	vec4 lazerColor = vec4(40.0,71.0,97.0,255.) / 255.0;
	vec4 bgColor = vec4(27.0,46.0,63.0,255.)/255.;
	vec4 lightColor =  vec4(40.0,71.0,97.0,255.) / 100.0;
	vec4 filter = bgColor;
	float shift;

	for(int i = 0 ; i < 7 ; i++){
		if (y > r[i] - bandWidth[i] && y < r[i] + bandWidth[i]){
			filter = bgColor;
			shift = sin(x*5.+time*3.* speed[i])+1.5;
			filter = vec4(shift, shift, shift,1.0) * filter;
		} 
	}
	
	gl_FragColor = filter;

}