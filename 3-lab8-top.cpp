//8.Binar qidiruvdan foydalanib massivdan berilgan kalitga karrali kalitli elementni va solishtirishlar sonini toping.
#include <bits/stdc++.h>
using namespace std;
class daraxt 
{
public:
    int info;
    daraxt *left;
    daraxt *right;
};
int k = 0;
int intrave(daraxt *tree)
{
    if (tree != NULL)

    {
        int a = NULL, b = NULL;
        if (tree->left != NULL)
        {
            a = tree->left->info;
        }
        if (tree->right != NULL)
        {
            b = tree->right->info;
        }
        cout << tree->info << "--chapida=>" << a << " ongida=>" << b << "\n";
        intrave(tree->left);
        intrave(tree->right);
    }
    return 0;
}
int create_arr(daraxt *tree, int *arr)
{
    if (!tree)
        return 0;
    else
    {
        create_arr(tree->left, arr);
        arr[k++] = tree->info;
        create_arr(tree->right, arr);
    }
}
daraxt *new_tree(int *arr, int start, int end)
{
    if (start > end)
        return NULL;
    else
    {
        int mid = (start + end) / 2;
        daraxt *tree = new daraxt;
        tree->info = arr[mid];
        tree->left = new_tree(arr, start, mid - 1);
        tree->right = new_tree(arr, mid + 1, end);
        return tree;
    }
}
int main()
{
    int n, key, s;
    daraxt *tree = NULL, *next = NULL;
    cout << "n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        daraxt *p = new daraxt;
        daraxt *last = new daraxt;
        cin >> s;
        p->info = s;
        p->left = NULL;
        p->right = NULL;
        if (i == 0)
        {
            tree = p;
            next = tree;
            continue;
        }
        next = tree;
        while (1)
        {
            last = next;
            if (p->info < next->info)
                next = next->left;
            else
                next = next->right;
            if (next == NULL)
                break;
        }
        if (p->info < last->info)
            last->left = p;
        else
            last->right = p;
    }
    cin >> key;
    cout << endl;
    intrave(tree);
    create_arr(tree, arr);
    cout << endl;
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    cout << endl;
    int l = 1, r = n, search_ = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            search_ = mid;
            break;
        }
        if (arr[mid] < key)
        {
            l = mid;
            k++;
        }
        else
        {
            r = mid;
            k++;
        }
    }
    cout << "Solishtirishlar soni " << k << endl;
    cout << "Qidirilayotgan element indexsi " << search_;
}