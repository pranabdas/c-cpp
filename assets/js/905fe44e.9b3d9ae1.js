"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[5963],{9649:(e,n,t)=>{t.r(n),t.d(n,{assets:()=>p,contentTitle:()=>f,default:()=>h,frontMatter:()=>d,metadata:()=>r,toc:()=>b});const r=JSON.parse('{"id":"basics/recursion","title":"Recursion","description":"Recursion enables us to solve certain types of problems very elegantly, however","source":"@site/docs/basics/recursion.mdx","sourceDirName":"basics","slug":"/basics/recursion","permalink":"/c-cpp/basics/recursion","draft":false,"unlisted":false,"editUrl":"https://github.com/pranabdas/c-cpp/blob/main/docs/basics/recursion.mdx","tags":[],"version":"current","frontMatter":{"title":"Recursion"},"sidebar":"docs","previous":{"title":"Function","permalink":"/c-cpp/basics/function"},"next":{"title":"Static storage","permalink":"/c-cpp/basics/static-storage"}}');var a=t(4848),s=t(8453),i=t(1470),l=t(9365),o=t(1432);const u='#include <stdio.h>\n\n// long allows factorial up to 20\nlong factorial(int num)\n{\n    if (num == 1)\n        return 1;\n    else\n        return (num * factorial(num - 1));\n}\n\nint main()\n{\n    int lim = 10, i;\n    long fact;\n\n    for (i = 1; i < lim; i++)\n    {\n        fact = factorial(i);\n        printf("%d! = %ld\\n", i, fact);\n    }\n    return 0;\n}\n',c='#include <iostream>\nusing namespace std;\n\nlong fibonacci(int n)\n{\n    if (n <= 1)\n        return n;\n    else\n        return (fibonacci(n - 1) + fibonacci(n - 2));\n}\n\nint main()\n{\n    int lim = 45, i;\n    long fib;\n\n    for (i = 0; i < lim; i++)\n    {\n        fib = fibonacci(i);\n        cout << "F(" << i << ") = " << fib << endl;\n    }\n    \n    return 0;\n}\n',d={title:"Recursion"},f=void 0,p={},b=[];function m(e){const n={admonition:"admonition",p:"p",...(0,s.R)(),...e.components};return(0,a.jsxs)(a.Fragment,{children:[(0,a.jsxs)(i.A,{groupId:"language",children:[(0,a.jsx)(l.A,{value:"C",children:(0,a.jsx)(o.A,{language:"c",title:"src/c/basics/06-recursive-factorial.c",showLineNumbers:!0,children:u})}),(0,a.jsx)(l.A,{value:"C++",children:(0,a.jsx)(o.A,{language:"cpp",title:"src/cpp/basics/06-recursive-fibonacci.cpp",showLineNumbers:!0,children:c})})]}),"\n",(0,a.jsx)(n.admonition,{type:"info",children:(0,a.jsx)(n.p,{children:"Recursion enables us to solve certain types of problems very elegantly, however\nthere are certain downside to large numbers of recursive function calls; it\nrequires large amount of stack memory, and program might crash with stack\noverflow."})})]})}function h(e={}){const{wrapper:n}={...(0,s.R)(),...e.components};return n?(0,a.jsx)(n,{...e,children:(0,a.jsx)(m,{...e})}):m(e)}},9365:(e,n,t)=>{t.d(n,{A:()=>i});t(6540);var r=t(4164);const a={tabItem:"tabItem_Ymn6"};var s=t(4848);function i(e){let{children:n,hidden:t,className:i}=e;return(0,s.jsx)("div",{role:"tabpanel",className:(0,r.A)(a.tabItem,i),hidden:t,children:n})}},1470:(e,n,t)=>{t.d(n,{A:()=>j});var r=t(6540),a=t(4164),s=t(3104),i=t(6347),l=t(205),o=t(7485),u=t(1682),c=t(679);function d(e){return r.Children.toArray(e).filter((e=>"\n"!==e)).map((e=>{if(!e||(0,r.isValidElement)(e)&&function(e){const{props:n}=e;return!!n&&"object"==typeof n&&"value"in n}(e))return e;throw new Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)}))?.filter(Boolean)??[]}function f(e){const{values:n,children:t}=e;return(0,r.useMemo)((()=>{const e=n??function(e){return d(e).map((e=>{let{props:{value:n,label:t,attributes:r,default:a}}=e;return{value:n,label:t,attributes:r,default:a}}))}(t);return function(e){const n=(0,u.XI)(e,((e,n)=>e.value===n.value));if(n.length>0)throw new Error(`Docusaurus error: Duplicate values "${n.map((e=>e.value)).join(", ")}" found in <Tabs>. Every value needs to be unique.`)}(e),e}),[n,t])}function p(e){let{value:n,tabValues:t}=e;return t.some((e=>e.value===n))}function b(e){let{queryString:n=!1,groupId:t}=e;const a=(0,i.W6)(),s=function(e){let{queryString:n=!1,groupId:t}=e;if("string"==typeof n)return n;if(!1===n)return null;if(!0===n&&!t)throw new Error('Docusaurus error: The <Tabs> component groupId prop is required if queryString=true, because this value is used as the search param name. You can also provide an explicit value such as queryString="my-search-param".');return t??null}({queryString:n,groupId:t});return[(0,o.aZ)(s),(0,r.useCallback)((e=>{if(!s)return;const n=new URLSearchParams(a.location.search);n.set(s,e),a.replace({...a.location,search:n.toString()})}),[s,a])]}function m(e){const{defaultValue:n,queryString:t=!1,groupId:a}=e,s=f(e),[i,o]=(0,r.useState)((()=>function(e){let{defaultValue:n,tabValues:t}=e;if(0===t.length)throw new Error("Docusaurus error: the <Tabs> component requires at least one <TabItem> children component");if(n){if(!p({value:n,tabValues:t}))throw new Error(`Docusaurus error: The <Tabs> has a defaultValue "${n}" but none of its children has the corresponding value. Available values are: ${t.map((e=>e.value)).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);return n}const r=t.find((e=>e.default))??t[0];if(!r)throw new Error("Unexpected error: 0 tabValues");return r.value}({defaultValue:n,tabValues:s}))),[u,d]=b({queryString:t,groupId:a}),[m,h]=function(e){let{groupId:n}=e;const t=function(e){return e?`docusaurus.tab.${e}`:null}(n),[a,s]=(0,c.Dv)(t);return[a,(0,r.useCallback)((e=>{t&&s.set(e)}),[t,s])]}({groupId:a}),v=(()=>{const e=u??m;return p({value:e,tabValues:s})?e:null})();(0,l.A)((()=>{v&&o(v)}),[v]);return{selectedValue:i,selectValue:(0,r.useCallback)((e=>{if(!p({value:e,tabValues:s}))throw new Error(`Can't select invalid tab value=${e}`);o(e),d(e),h(e)}),[d,h,s]),tabValues:s}}var h=t(2303);const v={tabList:"tabList__CuJ",tabItem:"tabItem_LNqP"};var g=t(4848);function y(e){let{className:n,block:t,selectedValue:r,selectValue:i,tabValues:l}=e;const o=[],{blockElementScrollPositionUntilNextRender:u}=(0,s.a_)(),c=e=>{const n=e.currentTarget,t=o.indexOf(n),a=l[t].value;a!==r&&(u(n),i(a))},d=e=>{let n=null;switch(e.key){case"Enter":c(e);break;case"ArrowRight":{const t=o.indexOf(e.currentTarget)+1;n=o[t]??o[0];break}case"ArrowLeft":{const t=o.indexOf(e.currentTarget)-1;n=o[t]??o[o.length-1];break}}n?.focus()};return(0,g.jsx)("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,a.A)("tabs",{"tabs--block":t},n),children:l.map((e=>{let{value:n,label:t,attributes:s}=e;return(0,g.jsx)("li",{role:"tab",tabIndex:r===n?0:-1,"aria-selected":r===n,ref:e=>o.push(e),onKeyDown:d,onClick:c,...s,className:(0,a.A)("tabs__item",v.tabItem,s?.className,{"tabs__item--active":r===n}),children:t??n},n)}))})}function w(e){let{lazy:n,children:t,selectedValue:s}=e;const i=(Array.isArray(t)?t:[t]).filter(Boolean);if(n){const e=i.find((e=>e.props.value===s));return e?(0,r.cloneElement)(e,{className:(0,a.A)("margin-top--md",e.props.className)}):null}return(0,g.jsx)("div",{className:"margin-top--md",children:i.map(((e,n)=>(0,r.cloneElement)(e,{key:n,hidden:e.props.value!==s})))})}function x(e){const n=m(e);return(0,g.jsxs)("div",{className:(0,a.A)("tabs-container",v.tabList),children:[(0,g.jsx)(y,{...n,...e}),(0,g.jsx)(w,{...n,...e})]})}function j(e){const n=(0,h.A)();return(0,g.jsx)(x,{...e,children:d(e.children)},String(n))}}}]);