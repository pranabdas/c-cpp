"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([["130"],{3223:function(e,t,r){r.r(t),r.d(t,{default:()=>h,frontMatter:()=>o,metadata:()=>n,assets:()=>d,toc:()=>p,contentTitle:()=>c});var n=JSON.parse('{"id":"data-structure/struct","title":"Struct","description":"","source":"@site/docs/data-structure/struct.mdx","sourceDirName":"data-structure","slug":"/data-structure/struct","permalink":"/c-cpp/data-structure/struct","draft":false,"unlisted":false,"editUrl":"https://github.com/pranabdas/c-cpp/blob/main/docs/data-structure/struct.mdx","tags":[],"version":"current","frontMatter":{"title":"Struct"},"sidebar":"docs","previous":{"title":"Introduction","permalink":"/c-cpp/data-structure/ds-intro"},"next":{"title":"enum","permalink":"/c-cpp/data-structure/enum"}}'),a=r("5893"),u=r("65"),l=r("7902"),s=r("5525"),i=r("5056");let o={title:"Struct"},c=void 0,d={},p=[];function f(e){return(0,a.jsxs)(l.Z,{groupId:"language",children:[(0,a.jsx)(s.Z,{value:"C",children:(0,a.jsx)(i.Z,{language:"c",title:"src/c/data-structure/01-struct.c",showLineNumbers:!0,children:'#include <stdio.h>\n\nstruct location\n{\n    double lat;\n    double lon;\n};\n\nint main()\n{\n    struct loc\n    {\n        double lat;\n        double lon;\n    } p1 = {1.1123, 86.9876}; // define and assignment together\n\n    struct location p2 = {1.1123, 86.9876};\n\n    printf("latitude of p1: %g\\n", p1.lat);\n\n    // alternative way to access members of a struct\n    struct loc *ptr = &p1;\n    printf("longitude of p1: %g\\n", ptr->lon);\n\n    // another way: do not need struct keyword while declaring variable\n    typedef struct\n    {\n        float age;\n        char gender;\n    } user;\n\n    user user1 = {34.0, \'m\'};\n\n    printf("user1 age: %g\\n", user1.age);\n\n    return 0;\n}\n'})}),(0,a.jsx)(s.Z,{value:"C++",children:(0,a.jsx)(i.Z,{language:"cpp",title:"src/cpp/data-structure/01-struct.cpp",showLineNumbers:!0,children:'#include <iostream>\nusing namespace std;\n\nstruct user\n{\n    string name;\n    int age;\n    float height;\n};\n\nint main()\n{\n    user new_user = {"Pranab", 35, 185};\n\n    cout << "Name : " << new_user.name << endl;\n    cout << "Age : " << new_user.age << endl;\n    cout << "Height : " << new_user.height << endl;\n\n    return 0;\n}\n'})})]})}function h(e={}){let{wrapper:t}={...(0,u.a)(),...e.components};return t?(0,a.jsx)(t,{...e,children:(0,a.jsx)(f,{...e})}):f(e)}},5525:function(e,t,r){r.d(t,{Z:()=>l});var n=r("5893");r("7294");var a=r("7026");let u="tabItem_Ymn6";function l(e){let{children:t,hidden:r,className:l}=e;return(0,n.jsx)("div",{role:"tabpanel",className:(0,a.Z)(u,l),hidden:r,children:t})}},7902:function(e,t,r){r.d(t,{Z:()=>x});var n=r("5893"),a=r("7294"),u=r("7026"),l=r("9599"),s=r("6550"),i=r("2000"),o=r("4520"),c=r("8341"),d=r("6009");function p(e){return a.Children.toArray(e).filter(e=>"\n"!==e).map(e=>{if(!e||a.isValidElement(e)&&function(e){let{props:t}=e;return!!t&&"object"==typeof t&&"value"in t}(e))return e;throw Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)})?.filter(Boolean)??[]}function f(e){let{value:t,tabValues:r}=e;return r.some(e=>e.value===t)}var h=r("7227");let m="tabList__CuJ",b="tabItem_LNqP";function g(e){let{className:t,block:r,selectedValue:a,selectValue:s,tabValues:i}=e,o=[],{blockElementScrollPositionUntilNextRender:c}=(0,l.o5)(),d=e=>{let t=e.currentTarget,r=i[o.indexOf(t)].value;r!==a&&(c(t),s(r))},p=e=>{let t=null;switch(e.key){case"Enter":d(e);break;case"ArrowRight":{let r=o.indexOf(e.currentTarget)+1;t=o[r]??o[0];break}case"ArrowLeft":{let r=o.indexOf(e.currentTarget)-1;t=o[r]??o[o.length-1]}}t?.focus()};return(0,n.jsx)("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,u.Z)("tabs",{"tabs--block":r},t),children:i.map(e=>{let{value:t,label:r,attributes:l}=e;return(0,n.jsx)("li",{role:"tab",tabIndex:a===t?0:-1,"aria-selected":a===t,ref:e=>o.push(e),onKeyDown:p,onClick:d,...l,className:(0,u.Z)("tabs__item",b,l?.className,{"tabs__item--active":a===t}),children:r??t},t)})})}function v(e){let{lazy:t,children:r,selectedValue:l}=e,s=(Array.isArray(r)?r:[r]).filter(Boolean);if(t){let e=s.find(e=>e.props.value===l);return e?(0,a.cloneElement)(e,{className:(0,u.Z)("margin-top--md",e.props.className)}):null}return(0,n.jsx)("div",{className:"margin-top--md",children:s.map((e,t)=>(0,a.cloneElement)(e,{key:t,hidden:e.props.value!==l}))})}function w(e){let t=function(e){let{defaultValue:t,queryString:r=!1,groupId:n}=e,u=function(e){let{values:t,children:r}=e;return(0,a.useMemo)(()=>{let e=t??p(r).map(e=>{let{props:{value:t,label:r,attributes:n,default:a}}=e;return{value:t,label:r,attributes:n,default:a}});return!function(e){let t=(0,c.lx)(e,(e,t)=>e.value===t.value);if(t.length>0)throw Error(`Docusaurus error: Duplicate values "${t.map(e=>e.value).join(", ")}" found in <Tabs>. Every value needs to be unique.`)}(e),e},[t,r])}(e),[l,h]=(0,a.useState)(()=>(function(e){let{defaultValue:t,tabValues:r}=e;if(0===r.length)throw Error("Docusaurus error: the <Tabs> component requires at least one <TabItem> children component");if(t){if(!f({value:t,tabValues:r}))throw Error(`Docusaurus error: The <Tabs> has a defaultValue "${t}" but none of its children has the corresponding value. Available values are: ${r.map(e=>e.value).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);return t}let n=r.find(e=>e.default)??r[0];if(!n)throw Error("Unexpected error: 0 tabValues");return n.value})({defaultValue:t,tabValues:u})),[m,b]=function(e){let{queryString:t=!1,groupId:r}=e,n=(0,s.k6)(),u=function(e){let{queryString:t=!1,groupId:r}=e;if("string"==typeof t)return t;if(!1===t)return null;if(!0===t&&!r)throw Error('Docusaurus error: The <Tabs> component groupId prop is required if queryString=true, because this value is used as the search param name. You can also provide an explicit value such as queryString="my-search-param".');return r??null}({queryString:t,groupId:r}),l=(0,o._X)(u);return[l,(0,a.useCallback)(e=>{if(!u)return;let t=new URLSearchParams(n.location.search);t.set(u,e),n.replace({...n.location,search:t.toString()})},[u,n])]}({queryString:r,groupId:n}),[g,v]=function(e){var t;let{groupId:r}=e;let n=(t=r)?`docusaurus.tab.${t}`:null,[u,l]=(0,d.Nk)(n);return[u,(0,a.useCallback)(e=>{if(!!n)l.set(e)},[n,l])]}({groupId:n}),w=(()=>{let e=m??g;return f({value:e,tabValues:u})?e:null})();return(0,i.Z)(()=>{w&&h(w)},[w]),{selectedValue:l,selectValue:(0,a.useCallback)(e=>{if(!f({value:e,tabValues:u}))throw Error(`Can't select invalid tab value=${e}`);h(e),b(e),v(e)},[b,v,u]),tabValues:u}}(e);return(0,n.jsxs)("div",{className:(0,u.Z)("tabs-container",m),children:[(0,n.jsx)(g,{...t,...e}),(0,n.jsx)(v,{...t,...e})]})}function x(e){let t=(0,h.Z)();return(0,n.jsx)(w,{...e,children:p(e.children)},String(t))}}}]);