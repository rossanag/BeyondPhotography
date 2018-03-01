#version 120

uniform sampler2DRect inputTexture1;
uniform sampler2DRect inputTexture2;
uniform vec2 resolution;

float length(vec3 v) {
    return (v.x + v.y + v.z) / 3.0;
}

void main() {
    
    vec2 uv = gl_FragCoord.xy / resolution;
    
    uv.y = 1.0 - uv.y;
    
    vec2 uvAbs = uv * resolution;
    
    vec3 tc2 = texture2DRect(inputTexture2, uvAbs).rgb;
    
    uvAbs.x = clamp(uvAbs.x + length(tc2)*100.0, 0.0, resolution.x);

    vec3 tc1 = texture2DRect(inputTexture1, uvAbs).rgb;
    
    vec3 tc = tc1;
    
    gl_FragColor = vec4(tc, 1.0);
}
