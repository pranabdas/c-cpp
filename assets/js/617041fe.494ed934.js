"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[501],{5762:(e,n,t)=>{t.r(n),t.d(n,{assets:()=>m,contentTitle:()=>p,default:()=>s,frontMatter:()=>r,metadata:()=>o,toc:()=>d});var a=t(7462),l=(t(7294),t(3905)),i=t(6823);const r={title:"Setting up C/C++ compiler",sidebar_label:"Setup",slug:"/",keywords:["C programming","C++ programming","scientific programming","numerical programming","numerical integration"]},p=void 0,o={unversionedId:"setup",id:"setup",title:"Setting up C/C++ compiler",description:"I will be using GNU C Compiler (GCC) to compile codes in a Linux computer. You",source:"@site/docs/setup.mdx",sourceDirName:".",slug:"/",permalink:"/c-cpp/",draft:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/setup.mdx",tags:[],version:"current",frontMatter:{title:"Setting up C/C++ compiler",sidebar_label:"Setup",slug:"/",keywords:["C programming","C++ programming","scientific programming","numerical programming","numerical integration"]},sidebar:"docs",next:{title:"Basics",permalink:"/c-cpp/category/basics"}},m={},d=[{value:"Makefile",id:"makefile",level:3},{value:"Debugging",id:"debugging",level:3},{value:"Cppcheck",id:"cppcheck",level:3},{value:"Valgrind",id:"valgrind",level:3}],u={toc:d};function s(e){let{components:n,...t}=e;return(0,l.kt)("wrapper",(0,a.Z)({},u,t,{components:n,mdxType:"MDXLayout"}),(0,l.kt)("p",null,"I will be using GNU C Compiler (GCC) to compile codes in a Linux computer. You\ncan install GCC in Ubuntu/Debian by:"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"apt install gcc\n")),(0,l.kt)("p",null,"Command to compile:"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"gcc filename.c\n\n# linking math lib\ngcc filename.c -lm\n\n# show all compiler warnings\ngcc -Wall filename.c\n\ng++ filename.cpp\n\n# compile with specific standard (might require for latest language features)\ng++ -std=c++17 filename.cpp\ng++ -std=c++2a filename.cpp\n")),(0,l.kt)("p",null,"This would produce executable with default name ",(0,l.kt)("inlineCode",{parentName:"p"},"a.out"),". You can specify the\nexecutable name by using the ",(0,l.kt)("inlineCode",{parentName:"p"},"-o")," flag:"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"gcc filename.c -o program_name\n")),(0,l.kt)("p",null,"For complex programs, you can use ",(0,l.kt)("inlineCode",{parentName:"p"},"-g")," flag to generate debugging information.\n",(0,l.kt)("inlineCode",{parentName:"p"},"-O")," flag can be used to optimize the executable file (",(0,l.kt)("inlineCode",{parentName:"p"},"-O2"),", ",(0,l.kt)("inlineCode",{parentName:"p"},"-O3")," denotes\nvarious levels of optimization)."),(0,l.kt)("p",null,"Compiler (GCC/Clang) flags for warnings: ",(0,l.kt)("inlineCode",{parentName:"p"},"-Wall"),", ",(0,l.kt)("inlineCode",{parentName:"p"},"-Wextra"),", ",(0,l.kt)("inlineCode",{parentName:"p"},"-Wpedantic"),",\n",(0,l.kt)("inlineCode",{parentName:"p"},"-Wunused"),"."),(0,l.kt)("h3",{id:"makefile"},"Makefile"),(0,l.kt)("p",null,"For large/complex projects with multiple source/header files and might require\nlinking various various libraries, unix makefile is very helpful to write the\ncompilation rules and build the program. Here is a very simple example:"),(0,l.kt)(i.Z,{language:"makefile",title:"src/cpp/basics/Makefile",showLineNumbers:!0,mdxType:"CodeBlock"},'CC=g++\nCFLAGS=-O3 -Wall\n\n# By default the left-hand-side of the first dependency is what you\n# get if you just type `make` with no arguments, in this case `make all`\nall: hello\n\n# commands must be indented with TAB not spaces\n# If you need to repair a Makefile that uses spaces, one way of converting\n# leading spaces into TABs is to use the unexpand program:\n# mv Makefile Makefile.old\n# unexpand Makefile.old > Makefile\n# $@ = target\n# $^ = dependencies\n# ${CC} -o hello hello.o\nhello: hello.o\n\t$(CC) $(CFLAGS) -o $@ $^\n\n# ${CC} -c 00-hello-world.cpp -o hello.o\n# $(CC) $(CFLAGS) -o $@ -c $^\nhello.o: 00-hello-world.cpp\n\t$(CC) $(CFLAGS) -o $@ -c $^\n\n# The $(RM) variable is predefined to "rm -f"\nclean:\n\t$(RM) hello *.o\n'),(0,l.kt)("p",null,"A makefile is consists of a set of rules. A rule consists of a target, a list of\nprerequisites, and a command. In the above example, we have several rules:\n",(0,l.kt)("inlineCode",{parentName:"p"},"all"),", ",(0,l.kt)("inlineCode",{parentName:"p"},"hello"),", ",(0,l.kt)("inlineCode",{parentName:"p"},"hello.o"),", and ",(0,l.kt)("inlineCode",{parentName:"p"},"clean"),". In case of ",(0,l.kt)("inlineCode",{parentName:"p"},"all"),", we have prerequisite\n",(0,l.kt)("inlineCode",{parentName:"p"},"hello"),", while there is no command. In case of ",(0,l.kt)("inlineCode",{parentName:"p"},"hello"),", prerequisite is ",(0,l.kt)("inlineCode",{parentName:"p"},"hello.o"),"\nand rule is: ",(0,l.kt)("inlineCode",{parentName:"p"},"${CC} -o hello hello.o")," and so on. If we run ",(0,l.kt)("inlineCode",{parentName:"p"},"make")," without any\nargument, the first rule will run, which is in this case ",(0,l.kt)("inlineCode",{parentName:"p"},"all"),". We can run\nanother rule, we can run it by providing its name, e.g., ",(0,l.kt)("inlineCode",{parentName:"p"},"make clean"),". Later we\nwill see use of more complex makefile."),(0,l.kt)("h3",{id:"debugging"},"Debugging"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"sudo apt update && sudo apt install gdb\n")),(0,l.kt)("p",null,"We can use ",(0,l.kt)("inlineCode",{parentName:"p"},"gdb")," to debug our program. We can embeed debugging information to\nour code by using ",(0,l.kt)("inlineCode",{parentName:"p"},"-g")," or ",(0,l.kt)("inlineCode",{parentName:"p"},"-g3")," flag. It might be helpful also to disable\noptimizations with ",(0,l.kt)("inlineCode",{parentName:"p"},"-O0")," while debugging. We compile the program:"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"gcc -g -O0 -Wall filename.c -o filename.o\n")),(0,l.kt)("p",null,"Using ",(0,l.kt)("inlineCode",{parentName:"p"},"gdb"),":"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"gdb filename.o\n")),(0,l.kt)("p",null,(0,l.kt)("strong",{parentName:"p"},"Useful gdb commands:")),(0,l.kt)("table",null,(0,l.kt)("thead",{parentName:"table"},(0,l.kt)("tr",{parentName:"thead"},(0,l.kt)("th",{parentName:"tr",align:null},"Commands"),(0,l.kt)("th",{parentName:"tr",align:null},"Description"))),(0,l.kt)("tbody",{parentName:"table"},(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"break/b ",(0,l.kt)("inlineCode",{parentName:"td"},"line-number")),(0,l.kt)("td",{parentName:"tr",align:null},"create breakpoint at specific line")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"break ",(0,l.kt)("inlineCode",{parentName:"td"},"filename:line-number")),(0,l.kt)("td",{parentName:"tr",align:null},"create breakpoint at specific line and file")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"run/r"),(0,l.kt)("td",{parentName:"tr",align:null},"run program")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"c"),(0,l.kt)("td",{parentName:"tr",align:null},"continue execution")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"next"),(0,l.kt)("td",{parentName:"tr",align:null},"execute next line")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"step/s"),(0,l.kt)("td",{parentName:"tr",align:null},"execute next line or step into function")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"quit/q"),(0,l.kt)("td",{parentName:"tr",align:null},"quit gdb")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"print expression"),(0,l.kt)("td",{parentName:"tr",align:null},"print current value of a specified expression")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"help ","[command]"),(0,l.kt)("td",{parentName:"tr",align:null},"in-program help")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"bt"),(0,l.kt)("td",{parentName:"tr",align:null},"print the stack trace")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"clear ",(0,l.kt)("inlineCode",{parentName:"td"},"line-number")),(0,l.kt)("td",{parentName:"tr",align:null},"clear break point")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"clear ",(0,l.kt)("inlineCode",{parentName:"td"},"filename:line-number")),(0,l.kt)("td",{parentName:"tr",align:null},"clear break point in a specific file and line")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"info/i break/b"),(0,l.kt)("td",{parentName:"tr",align:null},"list all break points")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"del ",(0,l.kt)("inlineCode",{parentName:"td"},"breakpoint Num")),(0,l.kt)("td",{parentName:"tr",align:null},"delete a break point")),(0,l.kt)("tr",{parentName:"tbody"},(0,l.kt)("td",{parentName:"tr",align:null},"del ",(0,l.kt)("inlineCode",{parentName:"td"},"start-br-pt"),"-",(0,l.kt)("inlineCode",{parentName:"td"},"end-br-pt")),(0,l.kt)("td",{parentName:"tr",align:null},"delete break points from ",(0,l.kt)("inlineCode",{parentName:"td"},"start-breakpoint-Num")," to ",(0,l.kt)("inlineCode",{parentName:"td"},"end-breakpoint-Num"))))),(0,l.kt)("h3",{id:"cppcheck"},"Cppcheck"),(0,l.kt)("p",null,"Sometimes I will be using ",(0,l.kt)("inlineCode",{parentName:"p"},"cppcheck")," to debug codes as well."),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"apt install cppcheck\ncppcheck --enable=all filename.cpp\n")),(0,l.kt)("h3",{id:"valgrind"},"Valgrind"),(0,l.kt)("p",null,"Install valgrind in Ubuntu/Debian:"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"apt install valgrind\n")),(0,l.kt)("p",null,"Valgrind is a memory profiling tool (includes memcheck, cachegrind, callgrind,\netc). First compile your program with debug flag:"),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"gcc -g filename.c\n")),(0,l.kt)("pre",null,(0,l.kt)("code",{parentName:"pre",className:"language-bash"},"valgrind ./a.out\nvalgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./a.out\n")),(0,l.kt)("p",null,"Valgrind can also detect:"),(0,l.kt)("ul",null,(0,l.kt)("li",{parentName:"ul"},"invalid pointer use"),(0,l.kt)("li",{parentName:"ul"},"use of uninitialized variables"),(0,l.kt)("li",{parentName:"ul"},"double frees")),(0,l.kt)("p",null,"Valgrind does not check bounds on statically allocated arrays."))}s.isMDXComponent=!0}}]);