// 字符出现频率统计
#include<stdio.h>
#include<ctype.h>
#define STOP '#'
int main(void)
{
    char ch;
    int size = 0;
    int a_ct, b_ct, c_ct, d_ct, e_ct, f_ct, g_ct, h_ct, i_ct, j_ct, k_ct, l_ct, m_ct; 
    int n_ct, o_ct, p_ct, q_ct, r_ct, s_ct, t_ct, u_ct, v_ct, w_ct, x_ct, y_ct, z_ct;
    a_ct = b_ct = c_ct = d_ct = e_ct = f_ct = g_ct = h_ct = i_ct = j_ct = k_ct = l_ct = m_ct = 0;
    n_ct = o_ct = p_ct = q_ct = r_ct = s_ct = t_ct = u_ct = v_ct = w_ct = x_ct = y_ct = z_ct = 0;

    printf("请输入字符(输入#结束)\n");
    while((ch = getchar()) != STOP)
    {   
        size++;
        switch (toupper(ch))
        {
            case 'A': a_ct++;
                      break;
            case 'B': b_ct++;
                      break;
            case 'C': c_ct++;
                      break;
            case 'D': d_ct++;
                      break;
            case 'E': e_ct++;
                      break;
            case 'F': f_ct++;
                      break;
            case 'G': g_ct++;
                      break;
            case 'H': h_ct++;
                      break;
            case 'I': i_ct++;
                      break;
            case 'J': j_ct++;
                      break;
            case 'K': k_ct++;
                      break;
            case 'L': l_ct++;
                      break;
            case 'M': m_ct++;
                      break;
            case 'N': n_ct++;
                      break;
            case 'O': o_ct++;
                      break;
            case 'P': p_ct++;
                      break;
            case 'Q': q_ct++;
                      break;
            case 'R': r_ct++;
                      break;
            case 'S': s_ct++;
                      break;
            case 'T': t_ct++;
                      break;
            case 'U': u_ct++;
                      break;
            case 'V': v_ct++;
                      break;
            case 'W': w_ct++;
                      break;
            case 'X': x_ct++;
                      break;
            case 'Y': y_ct++;
                      break;
            case 'Z': z_ct++;
                      break;
            default: //printf("出现错误!\n");
                     break;          
        }
    }
    printf("字符出现频率: A   B   C   D   E   F   G   H   I   J   K   L   M   N   O   P   Q   R   S   T   U   V   W   X   Y   Z\n");
    printf("           %4d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n"
           ,a_ct, b_ct, c_ct, d_ct, e_ct, f_ct, g_ct, h_ct, i_ct, j_ct, k_ct, l_ct, m_ct, n_ct, o_ct, p_ct, q_ct, r_ct, s_ct, t_ct,
            u_ct, v_ct, w_ct, x_ct, y_ct, z_ct );
    printf("一共有%d个字母.\n", size);

    getchar();
    getchar();
    return 0;
}