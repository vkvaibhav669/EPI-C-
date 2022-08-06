#define MAX 500

void helper(vector<int> &result, int x)
{    // Inititalise carryOver as 0.    
    int carryOver = 0;
   for (int i = 0; i < result.size(); i++)  
   { 
       int value = result[i] * x + carryOver;
       // Store last digit of value in the result.     
       result[i] = value % 10;
       // Remove the last digit from value and carry the remaining value.    
       carryOver = value / 10;    }
   // Run the loop until carryOver doesn't become zero.   
    while (carryOver != 0)    {        // Push the last digit of carryOver in result array.       
        result.push_back(carryOver % 10);
       // Update the carryOver.       
        carryOver = carryOver / 10;    } }
string calculateFactorial(int n) 
{    vector<int> result;
   // Enter 1 as the first element in the factorial array/list.  
 result.push_back(1);
   // Run loop for calculating factorial for rest of the elements.    
 for (int x = 2; x <= n; x++)    {        // Call the helper function for each x and update the result array/list.       
 helper(result, x);    }
   // We are representing answer in a string format.    
 string ans = "";
   for (int i = result.size() - 1; i >= 0; i--)    {        ans.push_back((char)(result[i] + '0'));    }
   return ans; }