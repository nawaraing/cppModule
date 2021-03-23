#include "iter.hpp"
#include <iostream>
#include <string>

void		ft_add(int &a)
{
	a += 5;
}
void		ft_ramg(std::string &arg)
{
	arg += "람쥐";
}
int			main(void)
{
	int			intArr[5] = {1, 2, 3, 4, 5};
	iter(intArr, 5, ft_add);
	std::cout << intArr[0] << " " << intArr[1] << " " << intArr[2] << " " << intArr[3] << " " << intArr[4] << " " << std::endl;
	std::string	strArr[5] = {"처음 뵙겠습니다", "반갑습니다", "저는 junkang입니다", "민초 좋아해요?", "민초를 안 드신다니 실망입니다"};
	iter(strArr, 5, ft_ramg);
	std::cout << strArr[0] << "\n" << strArr[1] << "\n" << strArr[2] << "\n" << strArr[3] << "\n" << strArr[4] << std::endl;
}