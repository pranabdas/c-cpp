/** @type {import('@docusaurus/types').DocusaurusConfig} */
import { themes } from "prism-react-renderer";
import remarkMath from "remark-math";
import rehypeKatex from "rehype-katex";
/** @type {import('@docusaurus/types').Config} */
const config = {
  title: "C and C++ Programing",
  tagline: "Learning to program in C and C++",
  url: "https://pranabdas.github.io",
  baseUrl: "/c-cpp/", // must have a trailing "/"
  onBrokenLinks: "throw",
  onBrokenMarkdownLinks: "warn",
  favicon: "img/favicon.png",
  organizationName: "pranabdas", // Usually your GitHub org/user name.
  projectName: "c-cpp", // Usually your repo name.
  titleDelimiter: "•",
  themeConfig:
    /** @type {import('@docusaurus/preset-classic').ThemeConfig} */
    ({
      metadata: [{ name: "theme-color", content: "#06445c" }],
      prism: {
        theme: themes.github,
        darkTheme: themes.nightOwl,
        additionalLanguages: ["bash", "c", "cpp", "docker", "makefile"],
      },
      docs: {
        sidebar: {
          hideable: true,
          autoCollapseCategories: true,
        },
      },
      colorMode: {
        // defaultMode: "dark",
        // switchConfig: {
        //   darkIcon: "☾",
        //   lightIcon: "☀️",
        // },
        respectPrefersColorScheme: true,
      },
      navbar: {
        title: "C and C++ Programming",
        hideOnScroll: true,
        logo: {
          alt: "Logo",
          src: "img/favicon.png",
        },
        items: [
          {
            to: "/",
            label: "Docs",
            position: "left",
            items: [
              {
                label: "C and C++ Programming",
                to: "/",
                target: "_self",
              },
              {
                label: "~ ~ ~ Other Docs ~ ~ ~",
                to: "https://pranabdas.github.io/docs/",
                target: "_self",
              },
              {
                label: "ARPES Python Tools",
                to: "https://pranabdas.github.io/arpespythontools/",
                target: "_self",
              },
              {
                label: "Condensed Matter Notes",
                to: "https://pranabdas.github.io/condmat-notes/",
                target: "_self",
              },
              {
                label: "Fortran Programming",
                to: "https://pranabdas.github.io/fortran/",
                target: "_self",
              },
              {
                label: "Javascript Tutorial",
                to: "https://pranabdas.github.io/javascript/",
                target: "_self",
              },
              {
                label: "Linux Tutorial",
                to: "https://pranabdas.github.io/linux/",
                target: "_self",
              },
              {
                label: "Machine Learning Notes",
                to: "https://pranabdas.github.io/machine-learning/",
                target: "_self",
              },
              {
                label: "OpenMX tutorial",
                to: "https://pranabdas.github.io/openmx/",
                target: "_self",
              },
              {
                label: "Python Tutorial",
                to: "https://pranabdas.github.io/python-tutorial/",
                target: "_self",
              },
              {
                label: "Rust Programming",
                to: "https://pranabdas.github.io/rust/",
                target: "_self",
              },
              {
                label: "Quantum Espresso Tutorial",
                to: "https://pranabdas.github.io/espresso/",
                target: "_self",
              },
              {
                label: "SUV ARPES Manual",
                to: "https://pranabdas.github.io/arpes-manual/",
                target: "_self",
              },
              {
                label: "SUV Python Tools",
                to: "https://pranabdas.github.io/suvtools/",
                target: "_self",
              },
            ],
          },
          {
            href: "https://github.com/pranabdas/c-cpp",
            position: "right",
            className: "header-github-link",
            "aria-label": "GitHub repository",
            title: "Visit project repository in GitHub",
            target: "_self",
          },
          {
            to: "https://pranabdas.github.io",
            "aria-label": "About me",
            position: "right",
            target: "_self",
            className: "header-homepage-link",
            title: "Go to Pranab's Homepage",
          },
        ],
      },

      footer: {
        style: "dark",
        copyright: `Copyright © ${new Date().getFullYear()} Pranab Das. All rights reserved.`,
      },

      mermaid: {
        theme: { light: "forest", dark: "dark" },
      },
    }),

  presets: [
    [
      "@docusaurus/preset-classic",
      /** @type {import('@docusaurus/preset-classic').Options} */
      ({
        docs: {
          sidebarPath: require.resolve("./sidebars.js"),
          routeBasePath: "/",
          editUrl: "https://github.com/pranabdas/c-cpp/blob/main/",
          remarkPlugins: [remarkMath],
          rehypePlugins: [rehypeKatex],
        },
        theme: {
          customCss: require.resolve("./src/css/custom.css"),
        },
      }),
    ],
  ],

  themes: [
    [
      // https://github.com/easyops-cn/docusaurus-search-local
      require.resolve("@easyops-cn/docusaurus-search-local"),
      {
        hashed: true,
        docsRouteBasePath: "/",
        indexBlog: false,
        indexPages: true,
        highlightSearchTermsOnTargetPage: true,
      },
    ],
    "@docusaurus/theme-mermaid",
  ],

  markdown: {
    mermaid: true,
  },

  stylesheets: [
    {
      href: "https://pranabdas.github.io/drive/webfonts/katex/katex.min.css",
      type: "text/css",
    },
  ],
};

export default config;
