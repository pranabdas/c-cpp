"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[6395],{9384:(e,n,t)=>{t.r(n),t.d(n,{assets:()=>p,contentTitle:()=>d,default:()=>f,frontMatter:()=>u,metadata:()=>h,toc:()=>m});var r=t(5893),a=t(1151),l=t(4866),s=t(5162),i=t(9286);const o='#include <stdio.h>\n\nint main()\n{\n    printf("Hello C!\\n");\n    return 0;\n}\n',c='#include <iostream>\n#include <cstdio> // original c standard io to use printf\n\nint main()\n{\n    std::cout << "Hello C++!\\n";\n    // we can still use printf from c standard io\n    printf("Hello from c standard io printf.\\n");\n\n    return 0;\n}\n',u={title:"Hello world"},d=void 0,h={id:"basics/hello-world",title:"Hello world",description:'We will learn through writing code. It is customary start with "Hello world!"',source:"@site/docs/basics/hello-world.mdx",sourceDirName:"basics",slug:"/basics/hello-world",permalink:"/c-cpp/basics/hello-world",draft:!1,unlisted:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/basics/hello-world.mdx",tags:[],version:"current",frontMatter:{title:"Hello world"},sidebar:"docs",previous:{title:"Basics",permalink:"/c-cpp/category/basics"},next:{title:"Add two integers",permalink:"/c-cpp/basics/add-two-integers"}},p={},m=[];function b(e){const n={admonition:"admonition",code:"code",li:"li",ol:"ol",p:"p",pre:"pre",...(0,a.a)(),...e.components};return(0,r.jsxs)(r.Fragment,{children:[(0,r.jsx)(n.p,{children:'We will learn through writing code. It is customary start with "Hello world!"\nprogram when learning a new programming language. This program simply prints a\nmessage in the terminal indicating the code ran successfully.'}),"\n","\n","\n",(0,r.jsxs)(l.Z,{groupId:"language",children:[(0,r.jsx)(s.Z,{value:"C",children:(0,r.jsx)(i.Z,{language:"c",title:"src/c/basics/00-hello-world.c",showLineNumbers:!0,children:o})}),(0,r.jsx)(s.Z,{value:"C++",children:(0,r.jsx)(i.Z,{language:"cpp",title:"src/cpp/basics/00-hello-world.cpp",showLineNumbers:!0,children:c})})]}),"\n",(0,r.jsx)(n.p,{children:"Compile the code:"}),"\n",(0,r.jsx)(n.pre,{children:(0,r.jsx)(n.code,{className:"language-bash",children:"# in case of C\ngcc filename.c\n\n# in case of C++\ng++ filename.cpp\n"})}),"\n",(0,r.jsxs)(n.p,{children:["It will produce an executable (binary) file named ",(0,r.jsx)(n.code,{children:"a.out"}),". We can run the\nexecutable by typing:"]}),"\n",(0,r.jsx)(n.pre,{children:(0,r.jsx)(n.code,{className:"language-bash",children:"./a.out\n"})}),"\n",(0,r.jsxs)(n.p,{children:["If you will to name your program something other than ",(0,r.jsx)(n.code,{children:"a.out"}),", you can specify\na custom name using ",(0,r.jsx)(n.code,{children:"-o"})," flag:"]}),"\n",(0,r.jsx)(n.pre,{children:(0,r.jsx)(n.code,{className:"language-bash",children:"gcc filename.c -o my_program\n"})}),"\n",(0,r.jsxs)(n.admonition,{type:"tip",children:[(0,r.jsxs)(n.ol,{children:["\n",(0,r.jsx)(n.li,{children:"It is possible to include entire standard library in C++ (it is a feature of\ng++ compiler) by:"}),"\n"]}),(0,r.jsx)(n.pre,{children:(0,r.jsx)(n.code,{className:"language-cpp",children:"#include <bits/stdc++.h>\n"})}),(0,r.jsxs)(n.ol,{start:"2",children:["\n",(0,r.jsx)(n.li,{children:"Input and output streams can be made more efficient by including following in\nthe beginning of the (main) program:"}),"\n"]}),(0,r.jsx)(n.pre,{children:(0,r.jsx)(n.code,{className:"language-cpp",children:"ios::sync_with_stdio(0);\ncin.tie(0);\n"})}),(0,r.jsxs)(n.ol,{start:"3",children:["\n",(0,r.jsxs)(n.li,{children:["Use of newline ",(0,r.jsx)(n.code,{children:"\\n"})," is faster than ",(0,r.jsx)(n.code,{children:"endl"}),", because ",(0,r.jsx)(n.code,{children:"endl"})," always causes a\nflush operation."]}),"\n"]})]})]})}function f(e={}){const{wrapper:n}={...(0,a.a)(),...e.components};return n?(0,r.jsx)(n,{...e,children:(0,r.jsx)(b,{...e})}):b(e)}},5162:(e,n,t)=>{t.d(n,{Z:()=>s});t(7294);var r=t(6905);const a={tabItem:"tabItem_Ymn6"};var l=t(5893);function s(e){let{children:n,hidden:t,className:s}=e;return(0,l.jsx)("div",{role:"tabpanel",className:(0,r.Z)(a.tabItem,s),hidden:t,children:n})}},4866:(e,n,t)=>{t.d(n,{Z:()=>y});var r=t(7294),a=t(6905),l=t(2466),s=t(6550),i=t(469),o=t(1980),c=t(7392),u=t(12);function d(e){return r.Children.toArray(e).filter((e=>"\n"!==e)).map((e=>{if(!e||(0,r.isValidElement)(e)&&function(e){const{props:n}=e;return!!n&&"object"==typeof n&&"value"in n}(e))return e;throw new Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)}))?.filter(Boolean)??[]}function h(e){const{values:n,children:t}=e;return(0,r.useMemo)((()=>{const e=n??function(e){return d(e).map((e=>{let{props:{value:n,label:t,attributes:r,default:a}}=e;return{value:n,label:t,attributes:r,default:a}}))}(t);return function(e){const n=(0,c.l)(e,((e,n)=>e.value===n.value));if(n.length>0)throw new Error(`Docusaurus error: Duplicate values "${n.map((e=>e.value)).join(", ")}" found in <Tabs>. Every value needs to be unique.`)}(e),e}),[n,t])}function p(e){let{value:n,tabValues:t}=e;return t.some((e=>e.value===n))}function m(e){let{queryString:n=!1,groupId:t}=e;const a=(0,s.k6)(),l=function(e){let{queryString:n=!1,groupId:t}=e;if("string"==typeof n)return n;if(!1===n)return null;if(!0===n&&!t)throw new Error('Docusaurus error: The <Tabs> component groupId prop is required if queryString=true, because this value is used as the search param name. You can also provide an explicit value such as queryString="my-search-param".');return t??null}({queryString:n,groupId:t});return[(0,o._X)(l),(0,r.useCallback)((e=>{if(!l)return;const n=new URLSearchParams(a.location.search);n.set(l,e),a.replace({...a.location,search:n.toString()})}),[l,a])]}function b(e){const{defaultValue:n,queryString:t=!1,groupId:a}=e,l=h(e),[s,o]=(0,r.useState)((()=>function(e){let{defaultValue:n,tabValues:t}=e;if(0===t.length)throw new Error("Docusaurus error: the <Tabs> component requires at least one <TabItem> children component");if(n){if(!p({value:n,tabValues:t}))throw new Error(`Docusaurus error: The <Tabs> has a defaultValue "${n}" but none of its children has the corresponding value. Available values are: ${t.map((e=>e.value)).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);return n}const r=t.find((e=>e.default))??t[0];if(!r)throw new Error("Unexpected error: 0 tabValues");return r.value}({defaultValue:n,tabValues:l}))),[c,d]=m({queryString:t,groupId:a}),[b,f]=function(e){let{groupId:n}=e;const t=function(e){return e?`docusaurus.tab.${e}`:null}(n),[a,l]=(0,u.Nk)(t);return[a,(0,r.useCallback)((e=>{t&&l.set(e)}),[t,l])]}({groupId:a}),g=(()=>{const e=c??b;return p({value:e,tabValues:l})?e:null})();(0,i.Z)((()=>{g&&o(g)}),[g]);return{selectedValue:s,selectValue:(0,r.useCallback)((e=>{if(!p({value:e,tabValues:l}))throw new Error(`Can't select invalid tab value=${e}`);o(e),d(e),f(e)}),[d,f,l]),tabValues:l}}var f=t(2389);const g={tabList:"tabList__CuJ",tabItem:"tabItem_LNqP"};var x=t(5893);function w(e){let{className:n,block:t,selectedValue:r,selectValue:s,tabValues:i}=e;const o=[],{blockElementScrollPositionUntilNextRender:c}=(0,l.o5)(),u=e=>{const n=e.currentTarget,t=o.indexOf(n),a=i[t].value;a!==r&&(c(n),s(a))},d=e=>{let n=null;switch(e.key){case"Enter":u(e);break;case"ArrowRight":{const t=o.indexOf(e.currentTarget)+1;n=o[t]??o[0];break}case"ArrowLeft":{const t=o.indexOf(e.currentTarget)-1;n=o[t]??o[o.length-1];break}}n?.focus()};return(0,x.jsx)("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,a.Z)("tabs",{"tabs--block":t},n),children:i.map((e=>{let{value:n,label:t,attributes:l}=e;return(0,x.jsx)("li",{role:"tab",tabIndex:r===n?0:-1,"aria-selected":r===n,ref:e=>o.push(e),onKeyDown:d,onClick:u,...l,className:(0,a.Z)("tabs__item",g.tabItem,l?.className,{"tabs__item--active":r===n}),children:t??n},n)}))})}function v(e){let{lazy:n,children:t,selectedValue:a}=e;const l=(Array.isArray(t)?t:[t]).filter(Boolean);if(n){const e=l.find((e=>e.props.value===a));return e?(0,r.cloneElement)(e,{className:"margin-top--md"}):null}return(0,x.jsx)("div",{className:"margin-top--md",children:l.map(((e,n)=>(0,r.cloneElement)(e,{key:n,hidden:e.props.value!==a})))})}function j(e){const n=b(e);return(0,x.jsxs)("div",{className:(0,a.Z)("tabs-container",g.tabList),children:[(0,x.jsx)(w,{...e,...n}),(0,x.jsx)(v,{...e,...n})]})}function y(e){const n=(0,f.Z)();return(0,x.jsx)(j,{...e,children:d(e.children)},String(n))}}}]);