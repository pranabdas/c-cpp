"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[596],{5162:(e,a,t)=>{t.d(a,{Z:()=>s});var n=t(7294),i=t(6010);const l="tabItem_Ymn6";function s(e){let{children:a,hidden:t,className:s}=e;return n.createElement("div",{role:"tabpanel",className:(0,i.Z)(l,s),hidden:t},a)}},5488:(e,a,t)=>{t.d(a,{Z:()=>v});var n=t(7462),i=t(7294),l=t(6010),s=t(2389),r=t(7392),c=t(7094),o=t(2466);const u="tabList__CuJ",d="tabItem_LNqP";function p(e){var a;const{lazy:t,block:s,defaultValue:p,values:v,groupId:_,className:b}=e,m=i.Children.map(e.children,(e=>{if((0,i.isValidElement)(e)&&"value"in e.props)return e;throw new Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)})),f=v??m.map((e=>{let{props:{value:a,label:t,attributes:n}}=e;return{value:a,label:t,attributes:n}})),g=(0,r.l)(f,((e,a)=>e.value===a.value));if(g.length>0)throw new Error(`Docusaurus error: Duplicate values "${g.map((e=>e.value)).join(", ")}" found in <Tabs>. Every value needs to be unique.`);const h=null===p?p:p??(null==(a=m.find((e=>e.props.default)))?void 0:a.props.value)??m[0].props.value;if(null!==h&&!f.some((e=>e.value===h)))throw new Error(`Docusaurus error: The <Tabs> has a defaultValue "${h}" but none of its children has the corresponding value. Available values are: ${f.map((e=>e.value)).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);const{tabGroupChoices:k,setTabGroupChoices:y}=(0,c.U)(),[T,w]=(0,i.useState)(h),E=[],{blockElementScrollPositionUntilNextRender:Z}=(0,o.o5)();if(null!=_){const e=k[_];null!=e&&e!==T&&f.some((a=>a.value===e))&&w(e)}const x=e=>{const a=e.currentTarget,t=E.indexOf(a),n=f[t].value;n!==T&&(Z(a),w(n),null!=_&&y(_,String(n)))},N=e=>{var a;let t=null;switch(e.key){case"Enter":x(e);break;case"ArrowRight":{const a=E.indexOf(e.currentTarget)+1;t=E[a]??E[0];break}case"ArrowLeft":{const a=E.indexOf(e.currentTarget)-1;t=E[a]??E[E.length-1];break}}null==(a=t)||a.focus()};return i.createElement("div",{className:(0,l.Z)("tabs-container",u)},i.createElement("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,l.Z)("tabs",{"tabs--block":s},b)},f.map((e=>{let{value:a,label:t,attributes:s}=e;return i.createElement("li",(0,n.Z)({role:"tab",tabIndex:T===a?0:-1,"aria-selected":T===a,key:a,ref:e=>E.push(e),onKeyDown:N,onClick:x},s,{className:(0,l.Z)("tabs__item",d,null==s?void 0:s.className,{"tabs__item--active":T===a})}),t??a)}))),t?(0,i.cloneElement)(m.filter((e=>e.props.value===T))[0],{className:"margin-top--md"}):i.createElement("div",{className:"margin-top--md"},m.map(((e,a)=>(0,i.cloneElement)(e,{key:a,hidden:e.props.value!==T})))))}function v(e){const a=(0,s.Z)();return i.createElement(p,(0,n.Z)({key:String(a)},e))}},8611:(e,a,t)=>{t.r(a),t.d(a,{assets:()=>d,contentTitle:()=>o,default:()=>_,frontMatter:()=>c,metadata:()=>u,toc:()=>p});var n=t(7462),i=(t(7294),t(3905)),l=t(5488),s=t(5162),r=t(814);const c={title:"Static storage"},o=void 0,u={unversionedId:"basics/static-storage",id:"basics/static-storage",title:"Static storage",description:"",source:"@site/docs/basics/static-storage.mdx",sourceDirName:"basics",slug:"/basics/static-storage",permalink:"/c-cpp/basics/static-storage",draft:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/basics/static-storage.mdx",tags:[],version:"current",frontMatter:{title:"Static storage"},sidebar:"docs",previous:{title:"Recursion",permalink:"/c-cpp/basics/recursion"},next:{title:"Array and Pointer",permalink:"/c-cpp/category/array-and-pointer"}},d={},p=[],v={toc:p};function _(e){let{components:a,...t}=e;return(0,i.kt)("wrapper",(0,n.Z)({},v,t,{components:a,mdxType:"MDXLayout"}),(0,i.kt)(l.Z,{groupId:"language",mdxType:"Tabs"},(0,i.kt)(s.Z,{value:"C",mdxType:"TabItem"},(0,i.kt)(r.Z,{language:"c",title:"src/c/basics/07-static-storage.c",showLineNumbers:!0,mdxType:"CodeBlock"},'#include <stdio.h>\n\n// variables declared in the file scope are static\nint global_var = 0;\n\nvoid increase_global_var()\n{\n    global_var++;\n    printf("global var called %d times\\n", global_var);\n}\n\nvoid increase_static_var()\n{\n    // static variable are initialized to 0, and initialized once\n    static int static_var = 0;\n    static_var++;\n    printf("static var called %d times\\n", static_var);\n}\n\nvoid increase_local_var()\n{\n    int local_var = 0;\n    local_var++;\n    printf("local var called %d times\\n", local_var);\n}\n\nint main()\n{\n    increase_global_var();\n    increase_global_var();\n\n    increase_static_var();\n    increase_static_var();\n    \n    increase_local_var();\n    increase_local_var();\n    \n    return 0;\n}\n')),(0,i.kt)(s.Z,{value:"C++",mdxType:"TabItem"},(0,i.kt)(r.Z,{language:"cpp",title:"src/cpp/basics/07-static-storage.cpp",showLineNumbers:!0,mdxType:"CodeBlock"},'#include <iostream>\nusing namespace std;\n\n// variables declared in the file scope are static by default\n// and initialized to zero.\nint no_of_calls;\n\nvoid increase_count()\n{\n    no_of_calls++;\n    cout << "The function is called " << no_of_calls << " time(s)" << endl;\n}\n\nvoid increase_count_static()\n{\n    static int static_no_of_calls = 0;\n    // by default static objects are initialized to zero\n    // even if we initialize, it will be initialized only once\n    static_no_of_calls++;\n    cout << "The static function is called " << static_no_of_calls\n         << " time(s)" << endl;\n}\n\nvoid increase_count_volatile()\n{\n    int volatile_no_of_calls = 0;\n    volatile_no_of_calls++;\n    cout << "The volatile function is called " << volatile_no_of_calls\n         << " time(s)" << endl;\n}\n\nint main()\n{\n    increase_count();\n    increase_count();\n    cout << endl;\n\n    increase_count_static();\n    increase_count_static();\n    cout << endl;\n\n    increase_count_volatile();\n    increase_count_volatile();\n\n    return 0;\n}\n'))))}_.isMDXComponent=!0}}]);