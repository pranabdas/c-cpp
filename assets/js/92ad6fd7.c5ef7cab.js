"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([["725"],{3382:function(n,t,i){i.r(t),i.d(t,{default:()=>f,frontMatter:()=>s,metadata:()=>e,assets:()=>c,toc:()=>l,contentTitle:()=>u});var e=JSON.parse('{"id":"arrays-pointers/pointer-to-function","title":"Pointer to function","description":"","source":"@site/docs/arrays-pointers/pointer-to-function.mdx","sourceDirName":"arrays-pointers","slug":"/arrays-pointers/pointer-to-function","permalink":"/c-cpp/arrays-pointers/pointer-to-function","draft":false,"unlisted":false,"editUrl":"https://github.com/pranabdas/c-cpp/blob/main/docs/arrays-pointers/pointer-to-function.mdx","tags":[],"version":"current","frontMatter":{"title":"Pointer to function"},"sidebar":"docs","previous":{"title":"Pointer basics","permalink":"/c-cpp/arrays-pointers/pointer-basics"},"next":{"title":"Algorithms","permalink":"/c-cpp/category/algorithms"}}'),r=i("5893"),o=i("65"),a=i("5056");let s={title:"Pointer to function"},u=void 0,c={},l=[];function p(n){return(0,r.jsx)(a.Z,{language:"cpp",title:"src/cpp/arrays-pointers/03-pointer-to-function.cpp",showLineNumbers:!0,children:'#include <iostream>\nusing namespace std;\n\nint square(int x)\n{\n    return (x * x);\n}\n\nint cube(int x)\n{\n    return (x * x * x);\n}\n\n// int (*f)(int x) : is a pointer to a function that takes int input and returns\n// int as well\n// double (*f)() : takes no input, returns double\nint sum(int (*f)(int x), int lim)\n{\n    int total = 0;\n\n    for (int i = 1; i <= lim; i++)\n    {\n        total += (*f)(i); // dereferencing is optional\n        // total += f(i);\n    }\n\n    return total;\n}\n\nint sum_alt(int f(int x), int lim)\n{\n    int total = 0;\n\n    for (int i = 1; i <= lim; i++)\n    {\n        total += f(i);\n    }\n\n    return total;\n}\n\nint main()\n{\n    cout << "square[0, 10] = " << sum(square, 10) << endl;\n    cout << "cube[0, 10] = " << sum(cube, 10) << endl;\n\n    cout << "square_alt[0, 10] = " << sum_alt(square, 10) << endl;\n    cout << "cube_alt[0, 10] = " << sum_alt(cube, 10) << endl;\n\n    return 0;\n}\n'})}function f(n={}){let{wrapper:t}={...(0,o.a)(),...n.components};return t?(0,r.jsx)(t,{...n,children:(0,r.jsx)(p,{...n})}):p(n)}}}]);