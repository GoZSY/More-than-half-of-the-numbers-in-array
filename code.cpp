/***************************************************************************
利用数组的特性，如果一个数字在数组中出现的次数超过一半，那么它比其他数字出现的和
还要多，因此我们可以考虑遍历数组的时候考虑保存两个值，一个是数组中的一个数字，一个是
次数。当我们遍历到下一个数字的时候，如果下一个数字和我们之前保存的数字不同，则次数减一，
相同则加一，如果次数为0则保存下一个数并将次数设置为1，最后保存的值一定是最后一次把次数
设置为1时对应的数字。
****************************************************************************/
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers)
    {
    	int length = numbers.size();
        if(length == 0)
            return 0;
        int times = 1;
        int result = numbers[0];
        for(int i = 1; i < length; ++i)
        {
           
            if(times == 0)
            {
                result = numbers[i];
                times++;
            }
            else if(result == numbers[i])
            {
                times++;
            }
            else
            {
                times--;
            }
        }
        times=0;
        for(int i = 0; i < length; ++i)
        {
            if(result == numbers[i])
                times++;
        }
        if(2*times > length)
            return result;
        return 0;
            
    }
};
