// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
int firstDuplicate(arr_integer a) {
     // printf("size of array: %i", a.size);
     // printf("attempting index 1: %i", a.arr[1]);
     for (int i = 0; i < a.size; i++)
     {
         if (a.arr[abs(a.arr[i]) - 1] < 0)
                   {
                      return abs(a.arr[i]);
                   }

               a.arr[abs(a.arr[i]) - 1] *= -1;
     }

       return -1;
}

             //a.arr[a.arr[0] - 1]
             //a.arr[2 -1];
             //a.arr[1] =4