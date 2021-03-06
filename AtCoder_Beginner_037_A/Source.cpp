/*
問題文
あなたは饅頭の店に来ています。ここでは白と緑の 2 種類の饅頭が売られていて、それぞれの種類は何個でも買うことができます。 白色の饅頭は 1 個 A 円で、緑色の饅頭は 1 個 B 円です。
あなたは C 円持っています。あなたはとにかく沢山の個数を食べたいので、種類は気にせず、なるべく多くの個数の饅頭を買おうと思っています。 2 種類で買う個数が違ったり、片方の種類しか買わなかったりしてもかまいません。
最大で何個の饅頭が買えるでしょうか。
*/

#include<iostream>

int main() {
	int answer,white, green, money;
	std::cin >> white >> green >> money;

	if (white < green) {
		answer = money / white;
	}else{
		answer = money / green;
	}

	std::cout << answer << std::endl;

	return 0;
}