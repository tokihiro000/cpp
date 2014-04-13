#include <iostream>
#include <mecab.h>

int main(int argc, char **argv) {
    char input[1024] = "ここはどこ？わたしはだれ？";

    MeCab::Tagger *tagger = MeCab::createTagger("");
    const char *result = tagger->parse(input);

    std::cout << result; 

    delete tagger;
}
