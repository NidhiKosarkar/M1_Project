#include<stdio.h>

int project()
{
    int n;
    printf("----Mini Information of programming----\n");
    printf("1 for C Language:\n");
    printf("2 for C++:\n");
    printf("3 for for HTML:\n");
    printf("4 for CSS:\n");

    printf("Enter your option:");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("--------------------------------------------------------------------------------------------------------------\n");

        printf("What is C?\nC is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972. It is a very popular language, despite being old. C is strongly associated with UNIX, as it was developed to write the UNIX operating system.\n\nWhy Learn C?\nIt is one of the most popular programming language in the world If you know C, you will have no problem to learn other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar C is very fast, compared to other programming languages, like Java and PythonC is very versatile; it can be used in both applications and technologies\n");
        
        printf("--------------------------------------------------------------------------------------------------------------\n");
        break;

        case 2:
        printf("--------------------------------------------------------------------------------------------------------------\n");

        printf("What is C++?\nC++ is a cross-platform language that can be used to create high-performance applications.C++ was developed by Bjarne Stroustrup, as an extension to the C language.C++ gives programmers a high level of control over system resources and memory. The language was updated 3 major times in 2011, 2014, and 2017 to C++11, C++14, and C++17.\n\nWhy Use C++?\nC++ is one of the world's most popular programming languages. C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems. C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.C++ is portable and can be used to develop applications that can be adapted to multiple platforms.C++ is fun and easy to learn! As C++ is close to C# and Java, it makes it easy for programmers to switch to C++ or vice versa.\n");
        
        printf("--------------------------------------------------------------------------------------------------------------\n");
        break;

        case 3:
        printf("--------------------------------------------------------------------------------------------------------------\n");

        printf("What is HTML?\nHTML stands for Hyper Text Markup Language.HTML is the standard markup language for creating Web pages.HTML describes the structure of a Web page.HTML consists of a series of elements.HTML elements tell the browser how to display the content.HTML elements label pieces of content such as this is a heading, this is a paragraph, this is a link, etc.\n\nExample Explained\nThe <!DOCTYPE html> declaration defines that this document is an HTML5 document\nThe <html> element is the root element of an HTML page\nThe <head> element contains meta information about the HTML page\nThe <title> element specifies a title for the HTML page (which is shown in the browser's title bar or in the page's tab)\nThe <body> element defines the document's body, and is a container for all the visible contents, such as headings, paragraphs, images, hyperlinks, tables, lists, etc.\nThe <h1> element defines a large heading\nThe <p> element defines a paragraph\n");
        
        printf("--------------------------------------------------------------------------------------------------------------\n");
        break;

        case 4:
        printf("--------------------------------------------------------------------------------------------------------------\n");

        printf("What is CSS?\nCSS stands for Cascading Style Sheets.CSS describes how HTML elements are to be displayed on screen, paper, or in other media.CSS saves a lot of work. It can control the layout of multiple web pages all at once.External stylesheets are stored in CSS files\n\nWhy Use CSS?\nCSS is used to define styles for your web pages, including the design, layout and variations in display for different devices and screen sizes.");
        printf("CSS Solved a Big Problem\n\nHTML was NEVER intended to contain tags for formatting a web page!\nHTML was created to describe the content of a web page, like:\n<h1>This is a heading</h1>\n<p>This is a paragraph.</p>\nWhen tags like <font>, and color attributes were added to the HTML 3.2 specification, it started a nightmare for web developers. Development of large websites, where fonts and color information were added to every single page, became a long and expensive process.\nTo solve this problem, the World Wide Web Consortium (W3C) created CSS.\nCSS removed the style formatting from the HTML page!\n");
       
        printf("--------------------------------------------------------------------------------------------------------------\n");
        break;

        case 5:


        default:
        printf("--------------------------------------------------------------------------------------------------------------\n");

        printf("Error! Choice is not correct");

        printf("--------------------------------------------------------------------------------------------------------------\n");
    }
    return 0;
}
int main()
{
    project();

    return 0;
}
