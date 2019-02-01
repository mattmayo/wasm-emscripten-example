# Web Assembly with Emscripten
Here lies an example of how to create a wasm (web assembly) module by compiling C code vi emscripten. It is based on the following set of tutorials from Mozilla, who is a major sponsor of wasm.
https://developer.mozilla.org/en-US/docs/WebAssembly/C_to_wasm

## How to execute
1. Clone this repo
1. Open the hello3.html file in a modern browser with web assembly enabled to view working example. (https://www.mozilla.org/en-US/firefox/new/)

## How to compile
1. Setup the emscripten sdk. Takes about 5 minutes. https://emscripten.org/docs/getting_started/downloads.html
1. Execute the following command in the root directly of this repo.
```shell-script
emcc -o hello3.html hello3.c -O3 -s WASM=1 --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'
```
