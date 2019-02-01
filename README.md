Here lies an example of how to create a wasm (web assembly) module by compiling C code vi emscripten. It is based on the following set of tutorials from Mozilla, who is a major sponsor of wasm.
https://developer.mozilla.org/en-US/docs/WebAssembly/C_to_wasm

Clone this repo and open the hello3.html file in a modern browser with web assembly enabled to view working example.

I used FireFox when developing this example. You can download it here.
https://www.mozilla.org/en-US/firefox/new/

If you'd like to compile the c code to a web assembly module use the following command after you have setup a local emscripten environment. If you just want to view executed code, you do not need to setup the emscripten sdk.

https://emscripten.org/docs/getting_started/downloads.html


```
emcc -o hello3.html hello3.c -O3 -s WASM=1 --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'
```
