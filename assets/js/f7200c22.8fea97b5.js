"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[7234],{1672:(n,t,i)=>{i.r(t),i.d(t,{assets:()=>m,contentTitle:()=>c,default:()=>b,frontMatter:()=>o,metadata:()=>d,toc:()=>p});var e=i(7462),s=(i(7294),i(3905)),a=i(814);const r='#include <iostream>\nusing namespace std;\n\nint main()\n{\n    int a = 5; // 0b101\n    int b, c;\n    // bit shift operation only valid for integer\n    b = a << 3; // same as a * 2^3 (0b101000)\n    c = a >> 1; // 0b10, same as integer division by 2 (rounds toward negative\n                // infinity, in contrast modulo division rounds towards 0)\n\n    cout << a << endl;\n    cout << b << endl;\n    cout << c << endl;\n\n    // encode year, month, day in a single number\n    unsigned int year, month, day, date;\n    year = 1947;\n    month = 8;\n    day = 15;\n\n    // use 5 bits for day, 4 bits for month\n    date = (((year << 4) + month) << 5) + day;\n\n    day = date % 32;\n    month = (date >> 5) % 16;\n    year = date >> 9;\n\n    cout << day << "/" << month << "/" << year << endl;\n\n    return 0;\n}\n',o={title:"Bit shifting"},c=void 0,d={unversionedId:"misc/bit-shifting",id:"misc/bit-shifting",title:"Bit shifting",description:"",source:"@site/docs/misc/bit-shifting.mdx",sourceDirName:"misc",slug:"/misc/bit-shifting",permalink:"/c-cpp/misc/bit-shifting",draft:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/misc/bit-shifting.mdx",tags:[],version:"current",frontMatter:{title:"Bit shifting"},sidebar:"docs",previous:{title:"Argument parsing",permalink:"/c-cpp/misc/arg-parsing"},next:{title:"Multiple return",permalink:"/c-cpp/misc/multiple-return"}},m={},p=[],u={toc:p},l="wrapper";function b(n){let{components:t,...i}=n;return(0,s.kt)(l,(0,e.Z)({},u,i,{components:t,mdxType:"MDXLayout"}),(0,s.kt)(a.Z,{language:"cpp",title:"src/cpp/misc/02-bit-shift.cpp",showLineNumbers:!0,mdxType:"CodeBlock"},r))}b.isMDXComponent=!0}}]);