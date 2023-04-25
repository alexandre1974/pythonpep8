#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"
static PyMethodDef module_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "main",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_main(void)
{
    PyObject* modname = NULL;
    if (CPyModule_main_internal) {
        Py_INCREF(CPyModule_main_internal);
        return CPyModule_main_internal;
    }
    CPyModule_main_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_main_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_main_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_main_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_main_internal;
    fail:
    Py_CLEAR(CPyModule_main_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", -1, CPyStatic_globals);
        goto CPyL29;
    }
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatic_globals;
    cpy_r_r6 = CPyStatics[4]; /* 'filanormal' */
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 1, CPyStatic_globals);
        goto CPyL29;
    }
CPyL4: ;
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = CPyStatics[5]; /* 'fila_normal' */
    cpy_r_r11 = PyImport_ImportModuleLevelObject(cpy_r_r10, cpy_r_r5, 0, cpy_r_r7, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 1, CPyStatic_globals);
        goto CPyL29;
    }
CPyL5: ;
    CPyModule_fila_normal = cpy_r_r11;
    CPy_INCREF(CPyModule_fila_normal);
    cpy_r_r12 = CPyStatics[5]; /* 'fila_normal' */
    cpy_r_r13 = CPyStatics[4]; /* 'filanormal' */
    cpy_r_r14 = CPyStatics[4]; /* 'filanormal' */
    cpy_r_r15 = CPyImport_ImportFrom(cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 1, CPyStatic_globals);
        goto CPyL29;
    }
CPyL6: ;
    cpy_r_r16 = CPyStatics[4]; /* 'filanormal' */
    cpy_r_r17 = CPyDict_SetItem(cpy_r_r5, cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("main.py", "<module>", 1, CPyStatic_globals);
        goto CPyL29;
    }
CPyL7: ;
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyStatics[6]; /* 'FilaPrioritaria' */
    cpy_r_r21 = PyList_New(1);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 2, CPyStatic_globals);
        goto CPyL29;
    }
CPyL8: ;
    cpy_r_r22 = (CPyPtr)&((PyListObject *)cpy_r_r21)->ob_item;
    cpy_r_r23 = *(CPyPtr *)cpy_r_r22;
    CPy_INCREF(cpy_r_r20);
    *(PyObject * *)cpy_r_r23 = cpy_r_r20;
    cpy_r_r24 = CPyStatics[7]; /* 'fila_prioritaria' */
    cpy_r_r25 = PyImport_ImportModuleLevelObject(cpy_r_r24, cpy_r_r19, 0, cpy_r_r21, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 2, CPyStatic_globals);
        goto CPyL29;
    }
CPyL9: ;
    CPyModule_fila_prioritaria = cpy_r_r25;
    CPy_INCREF(CPyModule_fila_prioritaria);
    cpy_r_r26 = CPyStatics[7]; /* 'fila_prioritaria' */
    cpy_r_r27 = CPyStatics[6]; /* 'FilaPrioritaria' */
    cpy_r_r28 = CPyStatics[6]; /* 'FilaPrioritaria' */
    cpy_r_r29 = CPyImport_ImportFrom(cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 2, CPyStatic_globals);
        goto CPyL29;
    }
CPyL10: ;
    cpy_r_r30 = CPyStatics[6]; /* 'FilaPrioritaria' */
    cpy_r_r31 = CPyDict_SetItem(cpy_r_r19, cpy_r_r30, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("main.py", "<module>", 2, CPyStatic_globals);
        goto CPyL29;
    }
CPyL11: ;
    cpy_r_r33 = CPyStatic_globals;
    cpy_r_r34 = CPyStatics[6]; /* 'FilaPrioritaria' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 4, CPyStatic_globals);
        goto CPyL29;
    }
CPyL12: ;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r35, 0, 0, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 4, CPyStatic_globals);
        goto CPyL29;
    }
CPyL13: ;
    cpy_r_r37 = CPyStatic_globals;
    cpy_r_r38 = CPyStatics[8]; /* 'fila2_teste' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("main.py", "<module>", 4, CPyStatic_globals);
        goto CPyL29;
    }
CPyL14: ;
    cpy_r_r41 = CPyStatic_globals;
    cpy_r_r42 = CPyStatics[8]; /* 'fila2_teste' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 5, CPyStatic_globals);
        goto CPyL29;
    }
CPyL15: ;
    cpy_r_r44 = CPyStatics[9]; /* 'atualiza_fila' */
    cpy_r_r45 = CPyObject_CallMethodObjArgs(cpy_r_r43, cpy_r_r44, NULL);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 5, CPyStatic_globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL16: ;
    cpy_r_r46 = CPyStatic_globals;
    cpy_r_r47 = CPyStatics[8]; /* 'fila2_teste' */
    cpy_r_r48 = CPyDict_GetItem(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 6, CPyStatic_globals);
        goto CPyL29;
    }
CPyL17: ;
    cpy_r_r49 = CPyStatics[9]; /* 'atualiza_fila' */
    cpy_r_r50 = CPyObject_CallMethodObjArgs(cpy_r_r48, cpy_r_r49, NULL);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 6, CPyStatic_globals);
        goto CPyL29;
    } else
        goto CPyL31;
CPyL18: ;
    cpy_r_r51 = CPyStatic_globals;
    cpy_r_r52 = CPyStatics[8]; /* 'fila2_teste' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 7, CPyStatic_globals);
        goto CPyL29;
    }
CPyL19: ;
    cpy_r_r54 = CPyStatics[10]; /* 'chama_cliente' */
    cpy_r_r55 = CPyStatics[15]; /* 5 */
    cpy_r_r56 = CPyObject_CallMethodObjArgs(cpy_r_r53, cpy_r_r54, cpy_r_r55, NULL);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 7, CPyStatic_globals);
        goto CPyL29;
    }
CPyL20: ;
    if (likely(PyUnicode_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("main.py", "<module>", 7, CPyStatic_globals, "str", cpy_r_r56);
        goto CPyL29;
    }
CPyL21: ;
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[11]; /* 'print' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 7, CPyStatic_globals);
        goto CPyL32;
    }
CPyL22: ;
    PyObject *cpy_r_r61[1] = {cpy_r_r57};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r60, cpy_r_r62, 1, 0);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 7, CPyStatic_globals);
        goto CPyL32;
    } else
        goto CPyL33;
CPyL23: ;
    CPy_DECREF(cpy_r_r57);
    cpy_r_r64 = CPyStatic_globals;
    cpy_r_r65 = CPyStatics[8]; /* 'fila2_teste' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 8, CPyStatic_globals);
        goto CPyL29;
    }
CPyL24: ;
    cpy_r_r67 = CPyStatics[12]; /* '11/12/2003' */
    cpy_r_r68 = CPyStatics[13]; /* 'detail' */
    cpy_r_r69 = CPyStatics[14]; /* 'estatistica' */
    cpy_r_r70 = CPyStatics[16]; /* 322 */
    cpy_r_r71 = CPyObject_CallMethodObjArgs(cpy_r_r66, cpy_r_r69, cpy_r_r67, cpy_r_r70, cpy_r_r68, NULL);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 8, CPyStatic_globals);
        goto CPyL29;
    }
CPyL25: ;
    if (likely(PyDict_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("main.py", "<module>", 8, CPyStatic_globals, "dict", cpy_r_r71);
        goto CPyL29;
    }
CPyL26: ;
    cpy_r_r73 = CPyModule_builtins;
    cpy_r_r74 = CPyStatics[11]; /* 'print' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 8, CPyStatic_globals);
        goto CPyL34;
    }
CPyL27: ;
    PyObject *cpy_r_r76[1] = {cpy_r_r72};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = _PyObject_Vectorcall(cpy_r_r75, cpy_r_r77, 1, 0);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("main.py", "<module>", 8, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL28: ;
    CPy_DECREF(cpy_r_r72);
    return 1;
CPyL29: ;
    cpy_r_r79 = 2;
    return cpy_r_r79;
CPyL30: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL16;
CPyL31: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL18;
CPyL32: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL29;
CPyL33: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL29;
CPyL35: ;
    CPy_DECREF(cpy_r_r78);
    goto CPyL28;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_main = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_fila_normal = Py_None;
    CPyModule_fila_prioritaria = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[17];
const char * const CPyLit_Str[] = {
    "\005\bbuiltins\nfilanormal\vfila_normal\017FilaPrioritaria\020fila_prioritaria",
    "\006\vfila2_teste\ratualiza_fila\rchama_cliente\005print\n11/12/2003\006detail",
    "\001\vestatistica",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0025\000322",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {0};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_main_internal = NULL;
CPyModule *CPyModule_main;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_fila_normal_internal = NULL;
CPyModule *CPyModule_fila_normal;
CPyModule *CPyModule_fila_prioritaria_internal = NULL;
CPyModule *CPyModule_fila_prioritaria;
char CPyDef___top_level__(void);
