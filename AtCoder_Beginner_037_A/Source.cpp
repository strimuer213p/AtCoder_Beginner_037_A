/*
��蕶
���Ȃ����\���̓X�ɗ��Ă��܂��B�����ł͔��Ɨ΂� 2 ��ނ��\���������Ă��āA���ꂼ��̎�ނ͉��ł��������Ƃ��ł��܂��B ���F���\���� 1 �� A �~�ŁA�ΐF���\���� 1 �� B �~�ł��B
���Ȃ��� C �~�����Ă��܂��B���Ȃ��͂Ƃɂ�����R�̌���H�ׂ����̂ŁA��ނ͋C�ɂ����A�Ȃ�ׂ������̌����\���𔃂����Ǝv���Ă��܂��B 2 ��ނŔ��������������A�Е��̎�ނ�������Ȃ������肵�Ă����܂��܂���B
�ő�ŉ����\����������ł��傤���B
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