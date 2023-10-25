#include <emscripten.h>
#include <Zend/zend_execute.h>

int EMSCRIPTEN_KEEPALIVE php_wasm_run(const char* code) {
    zend_result result =
        zend_eval_string_ex(code, NULL, "php.wasm code", 1);
    return result == SUCCESS ? 0 : 1;
}
