"use strict";(self.webpackChunkc_cpp=self.webpackChunkc_cpp||[]).push([[6257],{3693:(e,n,t)=>{t.r(n),t.d(n,{assets:()=>u,contentTitle:()=>h,default:()=>j,frontMatter:()=>d,metadata:()=>m,toc:()=>p});var s=t(5893),a=t(1151),r=t(4866),i=t(5162),l=t(9286);const c='#include <stdio.h>\n#include <stdlib.h>\n#include <assert.h>\n\ntypedef struct tree\n{\n    int key;\n    struct tree *left, *right;\n} tree;\n\ntree *create_tree(int key)\n{\n    tree *node = (tree *)malloc(sizeof(tree));\n    assert(node);\n    node->key = key;\n    node->left = NULL;\n    node->right = NULL;\n\n    return node;\n}\n\ntree *insert_node(tree *node, int key)\n{\n    if (node == NULL)\n    {\n        return (create_tree(key));\n    }\n\n    if (key < node->key)\n    {\n        node->left = insert_node(node->left, key);\n    }\n    else if (key > node->key)\n    {\n        node->right = insert_node(node->right, key);\n    }\n\n    return node;\n}\n\nvoid print_tree(tree *node)\n{\n    if (node == NULL)\n    {\n        return;\n    }\n    else if (node->left == NULL && node->right == NULL)\n    {\n        printf("%d", node->key);\n        return;\n    }\n    else\n    {\n        printf("%d", node->key);\n\n        if (node->left != NULL && node->right != NULL)\n        {\n            printf("[");\n            print_tree(node->left);\n            printf(", ");\n            print_tree(node->right);\n            printf("]");\n        }\n        else if (node->right == NULL /* && (node->left != NULL) */)\n        {\n            printf("[");\n            print_tree(node->left);\n            printf("]");\n        }\n        else /* if (node->left == NULL && (node->left != NULL)) */\n        {\n            printf("[");\n            print_tree(node->right);\n            printf("]");\n        }\n    }\n}\n\n// depth first search\ntree *search(tree *node, int key)\n{\n    if (node == NULL || node->key == key)\n    {\n        return node;\n    }\n\n    if (key < node->key)\n    {\n        return search(node->left, key);\n    }\n    else\n    {\n        return search(node->right, key);\n    }\n}\n\n// build queue data structure\ntypedef struct queue\n{\n    struct tree *item;  // content of queue, a tree pointer\n    struct queue *next; // pointer to next queue item\n\n} queue;\n\nvoid enqueue(queue **q, tree *node)\n{\n    queue *p = *q;\n    queue *r = (queue *)malloc(sizeof(queue));\n    assert(r);\n    r->item = node;\n    r->next = NULL;\n\n    if (p == NULL)\n    {\n        *q = r; // if the queue is empty, newly allocated item is the queue\n    }\n    else\n    {\n        while (p->next) // go to the end of queue and attach new item\n        {\n            p = p->next;\n        }\n        p->next = r;\n    }\n}\n\ntree *dequeue(queue **q)\n// removes first item from queue and returns the item\n{\n    queue *p = *q;\n\n    if (p)\n    {\n        *q = p->next;\n    }\n\n    return p->item;\n}\n\nint queue_length(queue *q)\n{\n    int len = 0;\n\n    while (q)\n    {\n        q = q->next;\n        len++;\n    }\n\n    return len;\n}\n\n// breadth first traversal to print binary tree level by level\nvoid print_tree_levels(tree *root)\n{\n    int number_of_nodes;\n    if (root == NULL)\n    {\n        return;\n    }\n\n    queue *q = NULL;\n    enqueue(&q, root);\n\n    while (1)\n    {\n        number_of_nodes = queue_length(q);\n        if (number_of_nodes == 0)\n        {\n            break;\n        }\n\n        while (number_of_nodes > 0)\n        {\n            tree *node = dequeue(&q);\n            printf("%d", node->key);\n            if (number_of_nodes > 1)\n            {\n                printf(", ");\n            }\n\n            if (node->left != NULL)\n            {\n                enqueue(&q, node->left);\n            }\n\n            if (node->right != NULL)\n            {\n                enqueue(&q, node->right);\n            }\n\n            number_of_nodes--;\n        }\n        printf("\\n");\n    }\n}\n\nint main()\n{\n    const int SIZE = 8;\n    int node_keys[8] = {5, 3, 2, 4, 7, 6, 8, 1};\n    int i;\n    tree *root = NULL;\n\n    root = insert_node(root, node_keys[0]);\n\n    for (i = 1; i < SIZE; i++)\n    {\n        insert_node(root, node_keys[i]);\n    }\n\n    printf("Print tree by in-order (depth first) traversal order:\\n");\n    print_tree(root);\n    printf("\\n");\n\n    tree *find = search(root, 7);\n    printf("\\nSearch: looking for \'7\' and got \'%d\'\\n", find->key);\n\n    printf("\\nPrinting tree level by level (breadth first traversal):\\n");\n    print_tree_levels(root);\n\n    return 0;\n}\n',o='// write a code that build a little 1-2-3 binary search tree\n#include <iostream>\nusing namespace std;\n\nstruct node\n{\n    int data;\n    struct node *left;\n    struct node *right;\n};\n\nstruct node *new_node(int data)\n{\n    struct node *node = new (struct node);\n    node->data = data;\n    node->left = nullptr;\n    node->right = nullptr;\n\n    return node;\n}\n\nstruct node *insert(struct node *node, int data)\n{\n    // if the tree is empty, return a new and single node\n    if (node == NULL)\n    {\n        return (new_node(data));\n    }\n    else\n    {\n        if (data < node->data)\n        {\n            node->left = insert(node->left, data);\n        }\n        else\n        {\n            node->right = insert(node->right, data);\n        }\n\n        return node;\n    }\n}\n\nvoid print_tree(struct node *node)\n{\n    if (node == nullptr)\n    {\n        return;\n    }\n    else if (node->left == nullptr && node->right == nullptr)\n    {\n        cout << node->data;\n        return;\n    }\n    else\n    {\n        cout << node->data;\n\n        if (node->left != nullptr && node->right != nullptr)\n        {\n            cout << "[";\n            print_tree(node->left);\n            cout << ",";\n            print_tree(node->right);\n            cout << "]";\n        }\n        else if (node->right == nullptr)\n        {\n            cout << "[";\n            print_tree(node->left);\n            cout << "]";\n        }\n        else\n        {\n            cout << "[";\n            print_tree(node->right);\n            cout << "]";\n        }\n    }\n}\n\nint size(struct node *node)\n{\n    if (node == nullptr)\n    {\n        return 0;\n    }\n    else\n    {\n        return (size(node->left) + size(node->right) + 1);\n    }\n}\n\nint max_depth(struct node *node)\n{\n    if (node == nullptr)\n    {\n        return 0;\n    }\n    else\n    {\n        int left_depth = max_depth(node->left);\n        int right_depth = max_depth(node->right);\n\n        if (left_depth > right_depth)\n        {\n            return (left_depth + 1);\n        }\n        else\n        {\n            return (right_depth + 1);\n        }\n    }\n}\n\nint main()\n{\n    struct node *root = NULL;\n    root = new_node(2);\n    root = insert(root, 1);\n    root = insert(root, 3);\n\n    print_tree(root);\n    cout << endl;\n    cout << "size = " << size(root) << endl;\n    cout << "max_depth = " << max_depth(root) << endl;\n\n    struct node *test;\n    test = new_node(5);\n    test = insert(test, 6);\n    test = insert(test, 3);\n    test = insert(test, 1);\n    test = insert(test, 2);\n    test = insert(test, 7);\n    test = insert(test, 9);\n    test = insert(test, 5);\n    test = insert(test, 0);\n    print_tree(test);\n\n    cout << endl;\n    cout << "size = " << size(test) << endl;\n    cout << "max_depth = " << max_depth(test) << endl;\n\n    return 0;\n}\n',d={title:"Binary trees"},h=void 0,m={id:"data-structure/binary-trees",title:"Binary trees",description:"Tree is a dynamic data structure composed of multi-levels of linked lists. A",source:"@site/docs/data-structure/binary-trees.mdx",sourceDirName:"data-structure",slug:"/data-structure/binary-trees",permalink:"/c-cpp/data-structure/binary-trees",draft:!1,unlisted:!1,editUrl:"https://github.com/pranabdas/c-cpp/blob/main/docs/data-structure/binary-trees.mdx",tags:[],version:"current",frontMatter:{title:"Binary trees"},sidebar:"docs",previous:{title:"Linked list",permalink:"/c-cpp/data-structure/linked-list"},next:{title:"Binary heaps",permalink:"/c-cpp/data-structure/heaps"}},u={},p=[{value:"Binary Search Tree",id:"binary-search-tree",level:3},{value:"Traversal algorithms",id:"traversal-algorithms",level:3},{value:"Depth First Search",id:"depth-first-search",level:3},{value:"Balanced binary tree (AVL tree)",id:"balanced-binary-tree-avl-tree",level:3},{value:"Resources",id:"resources",level:3}];function x(e){const n={a:"a",annotation:"annotation",code:"code",h3:"h3",li:"li",math:"math",mermaid:"mermaid",mi:"mi",mo:"mo",mrow:"mrow",ol:"ol",p:"p",pre:"pre",semantics:"semantics",span:"span",strong:"strong",ul:"ul",...(0,a.a)(),...e.components};return(0,s.jsxs)(s.Fragment,{children:[(0,s.jsxs)(n.p,{children:["Tree is a dynamic data structure composed of multi-levels of linked lists. A\ntree is defined as a node which consists of a value together with a list of\nreferences (pointers) to other such nodes. The top most node is called ",(0,s.jsx)(n.strong,{children:"root"}),"\nof the tree. Nodes are called parent if they points to other nodes, which are\ncalled ",(0,s.jsx)(n.strong,{children:"children"}),"."]}),"\n",(0,s.jsxs)(n.p,{children:["The simplest type of tree is a binary tree. A node in binary tree can have a\nmaximum of two references (called children), denoted by ",(0,s.jsx)(n.strong,{children:"left"})," and ",(0,s.jsx)(n.strong,{children:"right"}),".\nNodes without children is called leaf. The parent, grand parent, ... of a node\nis called ancestor nodes."]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Depth:"})," the depth of a node is the number of its ancestors. It is also the\nnumber of edges from that particular node to the root node. Root node has depth\n0."]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Height:"})," height of a node is the number of edges in the longest downward\npath. It is also the maximum depth of subtree rooted on that particular node.\nAll leafs have height 0."]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Size:"})," of a node is the number of nodes (including the node itself) in the\nsubtree rooted on that node."]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Set vs. Sequence:"})," when we work on a set interface, we look for items in a\ntree using the key. On the other hand, in case of a sequence implementation, we\nlook for items by its index. When looking for items by index, size of a subtree\nis important. Below is a pseudo code to find item by index:"]}),"\n",(0,s.jsx)(n.pre,{children:(0,s.jsx)(n.code,{className:"language-c",children:"tree *search(tree *node, i) {\n    size_left = size(node->left)\n    if (i < size_left) {\n        search(node->left, i)\n    } else if (i == size_left) {\n        return node;\n    } else { // i > size_left\n        search(node->right, i - size_left - 1)\n    }\n}\n"})}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Subtree augmentation:"})," we can maintain certain properties of a subtree as a\ndata member of a node, e.g, size of a subtree, minimum, maximum. Then we can\ncalculate size of any tree/subtree in constant time. Whenever, we insert or\ndelete new item to the tree, we need to update those node properties as well. We\nmust be able to efficiently (time complexity better than or same as\n",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"h"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(h)"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"h"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})})]}),") maintain such properties during tree modification. There are\nproperties that we can not maintain efficiently such as index of a node; that\nwould be ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"n"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(n)"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})})]})," operation."]}),"\n",(0,s.jsx)(n.h3,{id:"binary-search-tree",children:"Binary Search Tree"}),"\n",(0,s.jsx)(n.p,{children:"A Binary Search Tree (BST) is a binary tree with following properties:"}),"\n",(0,s.jsxs)(n.ol,{children:["\n",(0,s.jsx)(n.li,{children:"All node keys are distinct"}),"\n",(0,s.jsx)(n.li,{children:"The left subtree of a node contains only keys less than its key"}),"\n",(0,s.jsx)(n.li,{children:"Right subtree contains only keys greater than current node key"}),"\n",(0,s.jsx)(n.li,{children:"Both left and right subtrees are also binary search tree."}),"\n"]}),"\n",(0,s.jsx)(n.p,{children:"Example:"}),"\n",(0,s.jsx)(n.mermaid,{value:'graph TB;\n    A((10)) --\x3e B((5))\n    A --\x3e C((12))\n    B --\x3e D((2))\n    B --\x3e E((7))\n    E --\x3e F((6))\n    E --\x3e G((9))\n    C --\x3e H(("X"))\n    C --\x3e I((14))\n    I --\x3e K((13))\n    I --\x3e L(("X"))'}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.code,{children:"X"})," here represents ",(0,s.jsx)(n.code,{children:"NULL"})," pointer."]}),"\n",(0,s.jsxs)(n.p,{children:["Since BST provides an ordering among the node keys, operations such search,\nfind minimum, maximum becomes easier. The search depth of BST depends on the\nshape of the tree. If a tree is balanced the complexity is\n",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"h"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(h)"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"h"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})})]}),". In the worst case, when the tree is highly unbalanced (a\nsingly linked list) the time complexity of search is ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"n"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(n)"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})})]}),"."]}),"\n","\n","\n",(0,s.jsxs)(r.Z,{groupId:"language",children:[(0,s.jsx)(i.Z,{value:"C",children:(0,s.jsx)(l.Z,{language:"c",title:"src/c/data-structure/binary-tree.c",showLineNumbers:!0,children:c})}),(0,s.jsx)(i.Z,{value:"C++",children:(0,s.jsx)(l.Z,{language:"cpp",title:"src/cpp/data-structure/binary-tree.cpp",showLineNumbers:!0,children:o})})]}),"\n",(0,s.jsx)(n.h3,{id:"traversal-algorithms",children:"Traversal algorithms"}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Pre-order traversal:"})," ",(0,s.jsx)(n.code,{children:"node"})," \u2192 ",(0,s.jsx)(n.code,{children:"node->left"})," \u2192 ",(0,s.jsx)(n.code,{children:"node->right"})]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"In-order traversal:"})," ",(0,s.jsx)(n.code,{children:"node->left"})," \u2192 ",(0,s.jsx)(n.code,{children:"node"})," \u2192 ",(0,s.jsx)(n.code,{children:"node->right"}),". In the above tree\ndiagram, in-order traversal would be: 2, 5, 6, 7, 9, 10, 12, 13, 14."]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Post-order traversal:"})," ",(0,s.jsx)(n.code,{children:"node->left"})," \u2192 ",(0,s.jsx)(n.code,{children:"node->right"})," \u2192 ",(0,s.jsx)(n.code,{children:"node"}),"."]}),"\n",(0,s.jsx)(n.p,{children:"Note that there could be more than one (unique) tree representation for the same\ntraversal order."}),"\n",(0,s.jsx)(n.h3,{id:"depth-first-search",children:"Depth First Search"}),"\n",(0,s.jsx)(n.p,{children:"Above traversal algorithms are depth first algorithm, which use a stack for\nback-tracking. They can be implemented by recursion as shown in the above code\nexample."}),"\n",(0,s.jsx)(n.h3,{id:"balanced-binary-tree-avl-tree",children:"Balanced binary tree (AVL tree)"}),"\n",(0,s.jsxs)(n.p,{children:["How do we ensure ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"h"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"}),(0,s.jsx)(n.mo,{children:"="}),(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"log"}),(0,s.jsx)(n.mo,{children:"\u2061"}),(0,s.jsx)(n.mi,{children:"n"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(h) = \\mathcal{O}(\\log n)"})]})})}),(0,s.jsxs)(n.span,{className:"katex-html","aria-hidden":"true",children:[(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"h"}),(0,s.jsx)(n.span,{className:"mclose",children:")"}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.2778em"}}),(0,s.jsx)(n.span,{className:"mrel",children:"="}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.2778em"}})]}),(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsxs)(n.span,{className:"mop",children:["lo",(0,s.jsx)(n.span,{style:{marginRight:"0.01389em"},children:"g"})]}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})]})]}),", where ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsx)(n.mrow,{children:(0,s.jsx)(n.mi,{children:"h"})}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"h"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"0.6944em"}}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"h"})]})})]})," is the height\nof a tree and ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsx)(n.mrow,{children:(0,s.jsx)(n.mi,{children:"n"})}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"n"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"0.4306em"}}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"})]})})]})," is the total number of items in the tree? We know that in case\nof a balanced binary tree ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"h"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"}),(0,s.jsx)(n.mo,{children:"="}),(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"log"}),(0,s.jsx)(n.mo,{children:"\u2061"}),(0,s.jsx)(n.mi,{children:"n"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(h) = \\mathcal{O}(\\log n)"})]})})}),(0,s.jsxs)(n.span,{className:"katex-html","aria-hidden":"true",children:[(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"h"}),(0,s.jsx)(n.span,{className:"mclose",children:")"}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.2778em"}}),(0,s.jsx)(n.span,{className:"mrel",children:"="}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.2778em"}})]}),(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsxs)(n.span,{className:"mop",children:["lo",(0,s.jsx)(n.span,{style:{marginRight:"0.01389em"},children:"g"})]}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})]})]}),". There are\nseveral category of balanced binary trees."]}),"\n",(0,s.jsxs)(n.p,{children:[(0,s.jsx)(n.strong,{children:"Rotation:"})," We must ensure the traversal order after rotation. We must ensure\nthat traversal order is unchanged after rotation. In case of AVL tree, we\nmaintain the height balance. Skew of a node is defined as\n",(0,s.jsx)(n.code,{children:"height(node->right) - height(node->left)"}),". We like to maintain the skew of\nany node to be either 0, or 1 or -1. If we can maintain height balance,\n",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"h"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"}),(0,s.jsx)(n.mo,{children:"="}),(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"log"}),(0,s.jsx)(n.mo,{children:"\u2061"}),(0,s.jsx)(n.mi,{children:"n"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(h) = \\mathcal{O}(\\log n)"})]})})}),(0,s.jsxs)(n.span,{className:"katex-html","aria-hidden":"true",children:[(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"h"}),(0,s.jsx)(n.span,{className:"mclose",children:")"}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.2778em"}}),(0,s.jsx)(n.span,{className:"mrel",children:"="}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.2778em"}})]}),(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsxs)(n.span,{className:"mop",children:["lo",(0,s.jsx)(n.span,{style:{marginRight:"0.01389em"},children:"g"})]}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})]})]}),", indeed."]}),"\n",(0,s.jsxs)("picture",{children:[(0,s.jsx)("source",{type:"image/webp",srcSet:t(4118).Z}),(0,s.jsx)("img",{src:t(6955).Z,alt:"tree-rotation"})]}),"\n",(0,s.jsxs)(n.p,{children:["After rotation we need to update the subtree properties of A, B, and all their\nancestors, which could be done in ",(0,s.jsxs)(n.span,{className:"katex",children:[(0,s.jsx)(n.span,{className:"katex-mathml",children:(0,s.jsx)(n.math,{xmlns:"http://www.w3.org/1998/Math/MathML",children:(0,s.jsxs)(n.semantics,{children:[(0,s.jsxs)(n.mrow,{children:[(0,s.jsx)(n.mi,{mathvariant:"script",children:"O"}),(0,s.jsx)(n.mo,{stretchy:"false",children:"("}),(0,s.jsx)(n.mi,{children:"log"}),(0,s.jsx)(n.mo,{children:"\u2061"}),(0,s.jsx)(n.mi,{children:"n"}),(0,s.jsx)(n.mo,{stretchy:"false",children:")"})]}),(0,s.jsx)(n.annotation,{encoding:"application/x-tex",children:"\\mathcal{O}(\\log n)"})]})})}),(0,s.jsx)(n.span,{className:"katex-html","aria-hidden":"true",children:(0,s.jsxs)(n.span,{className:"base",children:[(0,s.jsx)(n.span,{className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.jsx)(n.span,{className:"mord mathcal",style:{marginRight:"0.02778em"},children:"O"}),(0,s.jsx)(n.span,{className:"mopen",children:"("}),(0,s.jsxs)(n.span,{className:"mop",children:["lo",(0,s.jsx)(n.span,{style:{marginRight:"0.01389em"},children:"g"})]}),(0,s.jsx)(n.span,{className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.jsx)(n.span,{className:"mord mathnormal",children:"n"}),(0,s.jsx)(n.span,{className:"mclose",children:")"})]})})]})," time."]}),"\n",(0,s.jsx)(n.h3,{id:"resources",children:"Resources"}),"\n",(0,s.jsxs)(n.ul,{children:["\n",(0,s.jsxs)(n.li,{children:[(0,s.jsx)(n.a,{href:"https://www.youtube.com/watch?v=76dhtgZt38A&list=PLUl4u3cNGP63EdVPNLG3ToM6LaEUuStEY&index=9",children:"MIT OCW Binary Trees Lecture 1"})," (",(0,s.jsx)("a",{target:"_blank",href:t(8817).Z,children:"related notes"}),")"]}),"\n",(0,s.jsxs)(n.li,{children:[(0,s.jsx)(n.a,{href:"https://www.youtube.com/watch?v=U1JYwHcFfso&list=PLUl4u3cNGP63EdVPNLG3ToM6LaEUuStEY&index=11",children:"MIT OCW Binary Trees Lecture 2"})," (",(0,s.jsx)("a",{target:"_blank",href:t(4035).Z,children:"related notes"}),")"]}),"\n",(0,s.jsxs)(n.li,{children:["\n",(0,s.jsx)("a",{target:"_blank",href:t(2806).Z,children:"Representing general tree as binary tree"}),"\n"]}),"\n"]})]})}function j(e={}){const{wrapper:n}={...(0,a.a)(),...e.components};return n?(0,s.jsx)(n,{...e,children:(0,s.jsx)(x,{...e})}):x(e)}},5162:(e,n,t)=>{t.d(n,{Z:()=>i});t(7294);var s=t(6905);const a={tabItem:"tabItem_Ymn6"};var r=t(5893);function i(e){let{children:n,hidden:t,className:i}=e;return(0,r.jsx)("div",{role:"tabpanel",className:(0,s.Z)(a.tabItem,i),hidden:t,children:n})}},4866:(e,n,t)=>{t.d(n,{Z:()=>w});var s=t(7294),a=t(6905),r=t(2466),i=t(6550),l=t(469),c=t(1980),o=t(7392),d=t(12);function h(e){return s.Children.toArray(e).filter((e=>"\n"!==e)).map((e=>{if(!e||(0,s.isValidElement)(e)&&function(e){const{props:n}=e;return!!n&&"object"==typeof n&&"value"in n}(e))return e;throw new Error(`Docusaurus error: Bad <Tabs> child <${"string"==typeof e.type?e.type:e.type.name}>: all children of the <Tabs> component should be <TabItem>, and every <TabItem> should have a unique "value" prop.`)}))?.filter(Boolean)??[]}function m(e){const{values:n,children:t}=e;return(0,s.useMemo)((()=>{const e=n??function(e){return h(e).map((e=>{let{props:{value:n,label:t,attributes:s,default:a}}=e;return{value:n,label:t,attributes:s,default:a}}))}(t);return function(e){const n=(0,o.l)(e,((e,n)=>e.value===n.value));if(n.length>0)throw new Error(`Docusaurus error: Duplicate values "${n.map((e=>e.value)).join(", ")}" found in <Tabs>. Every value needs to be unique.`)}(e),e}),[n,t])}function u(e){let{value:n,tabValues:t}=e;return t.some((e=>e.value===n))}function p(e){let{queryString:n=!1,groupId:t}=e;const a=(0,i.k6)(),r=function(e){let{queryString:n=!1,groupId:t}=e;if("string"==typeof n)return n;if(!1===n)return null;if(!0===n&&!t)throw new Error('Docusaurus error: The <Tabs> component groupId prop is required if queryString=true, because this value is used as the search param name. You can also provide an explicit value such as queryString="my-search-param".');return t??null}({queryString:n,groupId:t});return[(0,c._X)(r),(0,s.useCallback)((e=>{if(!r)return;const n=new URLSearchParams(a.location.search);n.set(r,e),a.replace({...a.location,search:n.toString()})}),[r,a])]}function x(e){const{defaultValue:n,queryString:t=!1,groupId:a}=e,r=m(e),[i,c]=(0,s.useState)((()=>function(e){let{defaultValue:n,tabValues:t}=e;if(0===t.length)throw new Error("Docusaurus error: the <Tabs> component requires at least one <TabItem> children component");if(n){if(!u({value:n,tabValues:t}))throw new Error(`Docusaurus error: The <Tabs> has a defaultValue "${n}" but none of its children has the corresponding value. Available values are: ${t.map((e=>e.value)).join(", ")}. If you intend to show no default tab, use defaultValue={null} instead.`);return n}const s=t.find((e=>e.default))??t[0];if(!s)throw new Error("Unexpected error: 0 tabValues");return s.value}({defaultValue:n,tabValues:r}))),[o,h]=p({queryString:t,groupId:a}),[x,j]=function(e){let{groupId:n}=e;const t=function(e){return e?`docusaurus.tab.${e}`:null}(n),[a,r]=(0,d.Nk)(t);return[a,(0,s.useCallback)((e=>{t&&r.set(e)}),[t,r])]}({groupId:a}),f=(()=>{const e=o??x;return u({value:e,tabValues:r})?e:null})();(0,l.Z)((()=>{f&&c(f)}),[f]);return{selectedValue:i,selectValue:(0,s.useCallback)((e=>{if(!u({value:e,tabValues:r}))throw new Error(`Can't select invalid tab value=${e}`);c(e),h(e),j(e)}),[h,j,r]),tabValues:r}}var j=t(2389);const f={tabList:"tabList__CuJ",tabItem:"tabItem_LNqP"};var g=t(5893);function y(e){let{className:n,block:t,selectedValue:s,selectValue:i,tabValues:l}=e;const c=[],{blockElementScrollPositionUntilNextRender:o}=(0,r.o5)(),d=e=>{const n=e.currentTarget,t=c.indexOf(n),a=l[t].value;a!==s&&(o(n),i(a))},h=e=>{let n=null;switch(e.key){case"Enter":d(e);break;case"ArrowRight":{const t=c.indexOf(e.currentTarget)+1;n=c[t]??c[0];break}case"ArrowLeft":{const t=c.indexOf(e.currentTarget)-1;n=c[t]??c[c.length-1];break}}n?.focus()};return(0,g.jsx)("ul",{role:"tablist","aria-orientation":"horizontal",className:(0,a.Z)("tabs",{"tabs--block":t},n),children:l.map((e=>{let{value:n,label:t,attributes:r}=e;return(0,g.jsx)("li",{role:"tab",tabIndex:s===n?0:-1,"aria-selected":s===n,ref:e=>c.push(e),onKeyDown:h,onClick:d,...r,className:(0,a.Z)("tabs__item",f.tabItem,r?.className,{"tabs__item--active":s===n}),children:t??n},n)}))})}function b(e){let{lazy:n,children:t,selectedValue:a}=e;const r=(Array.isArray(t)?t:[t]).filter(Boolean);if(n){const e=r.find((e=>e.props.value===a));return e?(0,s.cloneElement)(e,{className:"margin-top--md"}):null}return(0,g.jsx)("div",{className:"margin-top--md",children:r.map(((e,n)=>(0,s.cloneElement)(e,{key:n,hidden:e.props.value!==a})))})}function N(e){const n=x(e);return(0,g.jsxs)("div",{className:(0,a.Z)("tabs-container",f.tabList),children:[(0,g.jsx)(y,{...e,...n}),(0,g.jsx)(b,{...e,...n})]})}function w(e){const n=(0,j.Z)();return(0,g.jsx)(N,{...e,children:h(e.children)},String(n))}},8817:(e,n,t)=>{t.d(n,{Z:()=>s});const s=t.p+"assets/files/MIT6_006S20_r06_binary_tree-f0e17a7a81774744aed4f0421f08c494.pdf"},4035:(e,n,t)=>{t.d(n,{Z:()=>s});const s=t.p+"assets/files/MIT6_006S20_r07_balanced_binary_tree-3e52d54bd5e80862f01464b955429a0d.pdf"},2806:(e,n,t)=>{t.d(n,{Z:()=>s});const s=t.p+"assets/files/binary_tree_from_general_tree_gavrilova-c46a4feb3ffc4afc8ae1049eee6f553e.pdf"},6955:(e,n,t)=>{t.d(n,{Z:()=>s});const s=t.p+"assets/images/tree-rotation-e3801cfa36f139224a313f8a45febe7f.png"},4118:(e,n,t)=>{t.d(n,{Z:()=>s});const s=t.p+"assets/images/tree-rotation-935123fbf729177776745fe9436d11fd.webp"}}]);