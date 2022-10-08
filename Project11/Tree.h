#pragma once

#include "Node.h"

class Tree
{
private:

    // ������.
    Node* m_root;

    // ���������� �����.
    unsigned int m_size;

public:

    Tree();

    ~Tree();

    // �������� ������.
    Node* GetRoot() const;

    // ������� ����.
    void Insert(Node* node);

    // ������������ �������� �� ���������� ����.
    Node* Max(Node* node) const;

    // ����������� �������� �� ���������� ����.
    Node* Min(Node* node) const;

    // ��������� ���� ��� ���������� ����.
    Node* Next(const Node* node) const;

    // ���������� ���� ��� ���������� ����.
    Node* Previous(const Node* node) const;

    // ������ �� ���������� ����.
    void Print(const Node* node) const;

    void SaveFile (const Node* node) const;
    void Edit(Node* node);

    // �������� ����� ��� ���������� ����.
    void Remove(Node* node);

    // ����� �� ���������� ����.
    Node* Search(Node* node, const char* key) const;
};