"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[509],{5162:(e,t,n)=>{n.d(t,{Z:()=>o});var a=n(7294),r=n(6010);const l="tabItem_Ymn6";function o(e){let{children:t,hidden:n,className:o}=e;return a.createElement("div",{role:"tabpanel",className:(0,r.Z)(l,o),hidden:n},t)}},5488:(e,t,n)=>{n.d(t,{Z:()=>d});var a=n(7462),r=n(7294),l=n(6010),o=n(2389),u=n(7392),c=n(7094),s=n(2466);const i="tabList__CuJ",m="tabItem_LNqP";function p(e){var t;const{lazy:n,block:o,defaultValue:p,values:d,groupId:b,className:f}=e,v=r.Children.map(e.children,(e=>{if((0,r.isValidElement)(e)&&"value"in e.props)return e;throw new Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)})),h=d??v.map((e=>{let{props:{value:t,label:n,attributes:a}}=e;return{value:t,label:n,attributes:a}})),g=(0,u.l)(h,((e,t)=>e.value===t.value));if(g.length>0)throw new Error(`Docusaurus error: Duplicate values "${g.map((e=>e.value)).join(", ")}" found in <Tabs>. Every value needs to be unique.`);const x=null===p?p:p??(null==(t=v.find((e=>e.props.default)))?void 0:t.props.value)??v[0].props.value;if(null!==x&&!h.some((e=>e.value===x)))throw new Error(`Docusaurus error: The <Tabs> has a defaultValue "${x}" but none of its children has the corresponding value. Available values are: ${h.map((e=>e.value)).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);const{tabGroupChoices:_,setTabGroupChoices:z}=(0,c.U)(),[k,y]=(0,r.useState)(x),T=[],{blockElementScrollPositionUntilNextRender:C}=(0,s.o5)();if(null!=b){const e=_[b];null!=e&&e!==k&&h.some((t=>t.value===e))&&y(e)}const w=e=>{const t=e.currentTarget,n=T.indexOf(t),a=h[n].value;a!==k&&(C(t),y(a),null!=b&&z(b,String(a)))},E=e=>{var t;let n=null;switch(e.key){case"Enter":w(e);break;case"ArrowRight":{const t=T.indexOf(e.currentTarget)+1;n=T[t]??T[0];break}case"ArrowLeft":{const t=T.indexOf(e.currentTarget)-1;n=T[t]??T[T.length-1];break}}null==(t=n)||t.focus()};return r.createElement("div",{className:(0,l.Z)("tabs-container",i)},r.createElement("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,l.Z)("tabs",{"tabs--block":o},f)},h.map((e=>{let{value:t,label:n,attributes:o}=e;return r.createElement("li",(0,a.Z)({role:"tab",tabIndex:k===t?0:-1,"aria-selected":k===t,key:t,ref:e=>T.push(e),onKeyDown:E,onClick:w},o,{className:(0,l.Z)("tabs__item",m,null==o?void 0:o.className,{"tabs__item--active":k===t})}),n??t)}))),n?(0,r.cloneElement)(v.filter((e=>e.props.value===k))[0],{className:"margin-top--md"}):r.createElement("div",{className:"margin-top--md"},v.map(((e,t)=>(0,r.cloneElement)(e,{key:t,hidden:e.props.value!==k})))))}function d(e){const t=(0,o.Z)();return r.createElement(p,(0,a.Z)({key:String(t)},e))}},9166:(e,t,n)=>{n.r(t),n.d(t,{assets:()=>m,contentTitle:()=>s,default:()=>b,frontMatter:()=>c,metadata:()=>i,toc:()=>p});var a=n(7462),r=(n(7294),n(3905)),l=n(5488),o=n(5162),u=n(814);const c={title:"Complex number"},s=void 0,i={unversionedId:"data-structure/complex-number",id:"data-structure/complex-number",title:"Complex number",description:"",source:"@site/docs/data-structure/complex-number.mdx",sourceDirName:"data-structure",slug:"/data-structure/complex-number",permalink:"/c-cpp/data-structure/complex-number",draft:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/data-structure/complex-number.mdx",tags:[],version:"current",frontMatter:{title:"Complex number"},sidebar:"docs",previous:{title:"enum",permalink:"/c-cpp/data-structure/enum"},next:{title:"File IO",permalink:"/c-cpp/category/file-io"}},m={},p=[],d={toc:p};function b(e){let{components:t,...n}=e;return(0,r.kt)("wrapper",(0,a.Z)({},d,n,{components:t,mdxType:"MDXLayout"}),(0,r.kt)(l.Z,{groupId:"language",mdxType:"Tabs"},(0,r.kt)(o.Z,{value:"C",mdxType:"TabItem"},(0,r.kt)(u.Z,{language:"c",title:"src/c/data-structure/03-complex-number.c",showLineNumbers:!0,mdxType:"CodeBlock"},'// also see complex.h\n#include <stdio.h>\n\nint main()\n{\n    _Complex float z = 4.0 + 3.0i;\n\n    printf("Real part = %f\\n", __real__(z));\n    printf("Imaginary part = %f\\n", __imag__(z));\n    \n    // complex conjugate\n    _Complex float conj_z = ~z;\n    printf("Conjugate = (%f, %f)\\n", __real__(conj_z), __imag__(conj_z));\n\n    return 0;\n}')),(0,r.kt)(o.Z,{value:"C++",mdxType:"TabItem"},(0,r.kt)(u.Z,{language:"cpp",title:"src/cpp/data-structure/03-complex-number.cpp",showLineNumbers:!0,mdxType:"CodeBlock"},'#include <iostream>\n#include <complex>\nusing namespace std;\n\nint main()\n{\n    complex<double> z(2.0, 3.0); // declare complex number: 2 + 3i\n\n    // real and imaginary parts\n    cout << "Real part: " << real(z) << endl;\n    cout << "Imaginary part: " << imag(z) << endl;\n\n    // absolute value\n    cout << "Absolute value of " << z << " is " << abs(z) << endl;\n\n    // norm\n    cout << "Norm of " << z << " is " << norm(z) << endl;\n\n    // complex conjugate\n    cout << "Complex conjugate of " << z << " is " << conj(z) << endl;\n\n    complex<double> z2(3.0, 4.0);\n    cout << z << " + " << z2 << " = " << z + z2 << endl;\n    cout << z << " * " << z2 << " = " << z * z2 << endl;\n\n    return 0;\n}\n'))))}b.isMDXComponent=!0}}]);