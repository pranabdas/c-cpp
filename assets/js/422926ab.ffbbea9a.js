"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[3509],{5162:(e,t,n)=>{n.d(t,{Z:()=>l});var a=n(7294),r=n(6010);const u={tabItem:"tabItem_Ymn6"};function l(e){let{children:t,hidden:n,className:l}=e;return a.createElement("div",{role:"tabpanel",className:(0,r.Z)(u.tabItem,l),hidden:n},t)}},4866:(e,t,n)=>{n.d(t,{Z:()=>k});var a=n(7462),r=n(7294),u=n(6010),l=n(2466),o=n(6550),c=n(1980),s=n(7392),i=n(12);function m(e){return function(e){return r.Children.map(e,(e=>{if((0,r.isValidElement)(e)&&"value"in e.props)return e;throw new Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)}))}(e).map((e=>{let{props:{value:t,label:n,attributes:a,default:r}}=e;return{value:t,label:n,attributes:a,default:r}}))}function d(e){const{values:t,children:n}=e;return(0,r.useMemo)((()=>{const e=t??m(n);return function(e){const t=(0,s.l)(e,((e,t)=>e.value===t.value));if(t.length>0)throw new Error(`Docusaurus error: Duplicate values "${t.map((e=>e.value)).join(", ")}" found in <Tabs>. Every value needs to be unique.`)}(e),e}),[t,n])}function p(e){let{value:t,tabValues:n}=e;return n.some((e=>e.value===t))}function b(e){let{queryString:t=!1,groupId:n}=e;const a=(0,o.k6)(),u=function(e){let{queryString:t=!1,groupId:n}=e;if("string"==typeof t)return t;if(!1===t)return null;if(!0===t&&!n)throw new Error('Docusaurus error: The <Tabs> component groupId prop is required if queryString=true, because this value is used as the search param name. You can also provide an explicit value such as queryString="my-search-param".');return n??null}({queryString:t,groupId:n});return[(0,c._X)(u),(0,r.useCallback)((e=>{if(!u)return;const t=new URLSearchParams(a.location.search);t.set(u,e),a.replace({...a.location,search:t.toString()})}),[u,a])]}function f(e){const{defaultValue:t,queryString:n=!1,groupId:a}=e,u=d(e),[l,o]=(0,r.useState)((()=>function(e){let{defaultValue:t,tabValues:n}=e;if(0===n.length)throw new Error("Docusaurus error: the <Tabs> component requires at least one <TabItem> children component");if(t){if(!p({value:t,tabValues:n}))throw new Error(`Docusaurus error: The <Tabs> has a defaultValue "${t}" but none of its children has the corresponding value. Available values are: ${n.map((e=>e.value)).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);return t}const a=n.find((e=>e.default))??n[0];if(!a)throw new Error("Unexpected error: 0 tabValues");return a.value}({defaultValue:t,tabValues:u}))),[c,s]=b({queryString:n,groupId:a}),[m,f]=function(e){let{groupId:t}=e;const n=function(e){return e?`docusaurus.tab.${e}`:null}(t),[a,u]=(0,i.Nk)(n);return[a,(0,r.useCallback)((e=>{n&&u.set(e)}),[n,u])]}({groupId:a}),h=(()=>{const e=c??m;return p({value:e,tabValues:u})?e:null})();(0,r.useLayoutEffect)((()=>{h&&o(h)}),[h]);return{selectedValue:l,selectValue:(0,r.useCallback)((e=>{if(!p({value:e,tabValues:u}))throw new Error(`Can't select invalid tab value=${e}`);o(e),s(e),f(e)}),[s,f,u]),tabValues:u}}var h=n(2389);const g={tabList:"tabList__CuJ",tabItem:"tabItem_LNqP"};function v(e){let{className:t,block:n,selectedValue:o,selectValue:c,tabValues:s}=e;const i=[],{blockElementScrollPositionUntilNextRender:m}=(0,l.o5)(),d=e=>{const t=e.currentTarget,n=i.indexOf(t),a=s[n].value;a!==o&&(m(t),c(a))},p=e=>{let t=null;switch(e.key){case"Enter":d(e);break;case"ArrowRight":{const n=i.indexOf(e.currentTarget)+1;t=i[n]??i[0];break}case"ArrowLeft":{const n=i.indexOf(e.currentTarget)-1;t=i[n]??i[i.length-1];break}}t?.focus()};return r.createElement("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,u.Z)("tabs",{"tabs--block":n},t)},s.map((e=>{let{value:t,label:n,attributes:l}=e;return r.createElement("li",(0,a.Z)({role:"tab",tabIndex:o===t?0:-1,"aria-selected":o===t,key:t,ref:e=>i.push(e),onKeyDown:p,onClick:d},l,{className:(0,u.Z)("tabs__item",g.tabItem,l?.className,{"tabs__item--active":o===t})}),n??t)})))}function x(e){let{lazy:t,children:n,selectedValue:a}=e;if(n=Array.isArray(n)?n:[n],t){const e=n.find((e=>e.props.value===a));return e?(0,r.cloneElement)(e,{className:"margin-top--md"}):null}return r.createElement("div",{className:"margin-top--md"},n.map(((e,t)=>(0,r.cloneElement)(e,{key:t,hidden:e.props.value!==a}))))}function y(e){const t=f(e);return r.createElement("div",{className:(0,u.Z)("tabs-container",g.tabList)},r.createElement(v,(0,a.Z)({},e,t)),r.createElement(x,(0,a.Z)({},e,t)))}function k(e){const t=(0,h.Z)();return r.createElement(y,(0,a.Z)({key:String(t)},e))}},9166:(e,t,n)=>{n.r(t),n.d(t,{assets:()=>p,contentTitle:()=>m,default:()=>g,frontMatter:()=>i,metadata:()=>d,toc:()=>b});var a=n(7462),r=(n(7294),n(3905)),u=n(4866),l=n(5162),o=n(814);const c='// also see complex.h\n#include <stdio.h>\n\nint main()\n{\n    _Complex float z = 4.0 + 3.0i;\n\n    printf("Real part = %f\\n", __real__(z));\n    printf("Imaginary part = %f\\n", __imag__(z));\n    \n    // complex conjugate\n    _Complex float conj_z = ~z;\n    printf("Conjugate = (%f, %f)\\n", __real__(conj_z), __imag__(conj_z));\n\n    return 0;\n}',s='#include <iostream>\n#include <complex>\nusing namespace std;\n\nint main()\n{\n    complex<double> z(2.0, 3.0); // declare complex number: 2 + 3i\n\n    // real and imaginary parts\n    cout << "Real part: " << real(z) << endl;\n    cout << "Imaginary part: " << imag(z) << endl;\n\n    // absolute value\n    cout << "Absolute value of " << z << " is " << abs(z) << endl;\n\n    // norm\n    cout << "Norm of " << z << " is " << norm(z) << endl;\n\n    // complex conjugate\n    cout << "Complex conjugate of " << z << " is " << conj(z) << endl;\n\n    complex<double> z2(3.0, 4.0);\n    cout << z << " + " << z2 << " = " << z + z2 << endl;\n    cout << z << " * " << z2 << " = " << z * z2 << endl;\n\n    return 0;\n}\n',i={title:"Complex number"},m=void 0,d={unversionedId:"data-structure/complex-number",id:"data-structure/complex-number",title:"Complex number",description:"",source:"@site/docs/data-structure/complex-number.mdx",sourceDirName:"data-structure",slug:"/data-structure/complex-number",permalink:"/c-cpp/data-structure/complex-number",draft:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/data-structure/complex-number.mdx",tags:[],version:"current",frontMatter:{title:"Complex number"},sidebar:"docs",previous:{title:"enum",permalink:"/c-cpp/data-structure/enum"},next:{title:"Linked list",permalink:"/c-cpp/data-structure/linked-list"}},p={},b=[],f={toc:b},h="wrapper";function g(e){let{components:t,...n}=e;return(0,r.kt)(h,(0,a.Z)({},f,n,{components:t,mdxType:"MDXLayout"}),(0,r.kt)(u.Z,{groupId:"language",mdxType:"Tabs"},(0,r.kt)(l.Z,{value:"C",mdxType:"TabItem"},(0,r.kt)(o.Z,{language:"c",title:"src/c/data-structure/03-complex-number.c",showLineNumbers:!0,mdxType:"CodeBlock"},c)),(0,r.kt)(l.Z,{value:"C++",mdxType:"TabItem"},(0,r.kt)(o.Z,{language:"cpp",title:"src/cpp/data-structure/03-complex-number.cpp",showLineNumbers:!0,mdxType:"CodeBlock"},s))))}g.isMDXComponent=!0}}]);