"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[154],{8600:(n,t,e)=>{e.r(t),e.d(t,{assets:()=>u,contentTitle:()=>c,default:()=>g,frontMatter:()=>p,metadata:()=>d,toc:()=>l});var a=e(7462),i=(e(7294),e(3905)),s=e(5488),o=e(5162),r=e(814);const p={title:"Add two integers"},c=void 0,d={unversionedId:"basics/add-two-integers",id:"basics/add-two-integers",title:"Add two integers",description:"In the following program, we will ask the user to enter two integer inputs. The",source:"@site/docs/basics/add-two-integers.mdx",sourceDirName:"basics",slug:"/basics/add-two-integers",permalink:"/c-cpp/basics/add-two-integers",draft:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/basics/add-two-integers.mdx",tags:[],version:"current",frontMatter:{title:"Add two integers"},sidebar:"docs",previous:{title:"Hello world",permalink:"/c-cpp/basics/hello-world"},next:{title:"Basic data types",permalink:"/c-cpp/basics/data-types"}},u={},l=[],m={toc:l};function g(n){let{components:t,...e}=n;return(0,i.kt)("wrapper",(0,a.Z)({},m,e,{components:t,mdxType:"MDXLayout"}),(0,i.kt)("p",null,"In the following program, we will ask the user to enter two integer inputs. The\nprograms will calculate and print the sum of two numbers."),(0,i.kt)(s.Z,{groupId:"language",mdxType:"Tabs"},(0,i.kt)(o.Z,{value:"C",mdxType:"TabItem"},(0,i.kt)(r.Z,{language:"c",title:"src/c/basics/01-add-two-integers.c",showLineNumbers:!0,mdxType:"CodeBlock"},'#include <stdio.h>\n\nint main()\n{\n    int input1, input2, sum;\n\n    printf("Enter input 1: ");\n    scanf("%d", &input1);\n\n    printf("Enter input 2: ");\n    scanf("%d", &input2);\n\n    sum = input1 + input2;\n\n    printf("%d + %d = %d\\n", input1, input2, sum);\n\n    return 0;\n}\n')),(0,i.kt)(o.Z,{value:"C++",mdxType:"TabItem"},(0,i.kt)(r.Z,{language:"cpp",title:"src/cpp/basics/01-add-two-integers.cpp",showLineNumbers:!0,mdxType:"CodeBlock"},'#include <iostream>\nusing namespace std;\n// above declaration exposes all the methods described in the std namespace\n// so that we can use cout instead of std::cout. Beware that in large\n// applications there could be naming conflict among various imported headers.\n// We can either use the convention std::cout or declare only the methods we\n// need:\n// using namespace std::cout;\n\nint main()\n{\n    int input1, input2, sum;\n\n    cout << "Enter input 1: ";\n    cin >> input1;\n\n    cout << "Enter input 2: ";\n    cin >> input2;\n\n    sum = input1 + input2;\n\n    cout << input1 << " + " << input2 << " = " << sum << endl;\n\n    return 0;\n}\n'))),(0,i.kt)("admonition",{type:"danger"},(0,i.kt)("pre",{parentName:"admonition"},(0,i.kt)("code",{parentName:"pre",className:"language-cpp"},"int a = 123456789;\nlong long b = a * a; // this is wrong, a * a will result in int type\nlong long c = (long long) a * a; // or change the type of a to long long\n"))),(0,i.kt)("admonition",{type:"caution"},(0,i.kt)("p",{parentName:"admonition"},"It is risky to compare floating point numbers with ",(0,i.kt)("inlineCode",{parentName:"p"},"==")," due to precision errors.\nBetter approach is to check the difference is less than a small number:"),(0,i.kt)("pre",{parentName:"admonition"},(0,i.kt)("code",{parentName:"pre",className:"language-cpp"},"if (abs(a - b) < 1e-9)\n{\n    // a and b are equal\n}\n"))))}g.isMDXComponent=!0}}]);