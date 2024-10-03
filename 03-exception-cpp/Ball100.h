#pragma once

/// <summary>
/// ����� ����� � ���������� [0; 100]
/// </summary>
class Ball100
{
public:
    /// <summary>
    /// ������������ ������
    /// 
    /// ���� �������� ����� �� ��������� � ��������� [0; 100],
    /// �� ��������� ���������� 
    /// </summary>
    /// <param name="val">�������� �����</param>
    Ball100(int val);

    /// <summary>
    /// ������
    /// </summary>
    /// <returns></returns>
    int get();

    /// <summary>
    /// ������
    /// 
    /// ���� �������� ����� �� ��������� � ��������� [0; 100],
    /// �� ��������� ���������� 
    /// </summary>
    /// <param name="val"></param>
    void set(int val);

private:
    int m_val;
};
