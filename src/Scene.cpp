//lucia fuentes //part one
#include <iostream>

#include "ShaderPhong.h"
#include "PrimTriangle.h"
#include "Scene.h"
#include "ShaderEyelight.h"

using namespace std;

void CScene::ParseOBJ(const string& fileName)
{
    cout << "Parsing OBJect File : " << fileName;
    shared_ptr<IShader> pShader = make_shared<CShaderEyelight>(RGB(1, 1, 1));
    // --- PUT YOUR CODE HERE ---
    vector<Vec3f> vertices;
    string lines, c;
    
    ifstream input;
    
    input.open (fileName, input);
    if (!(input.is_open())){
            cerr << "not able to  open " << fileName;
            exit(1);

    }

    
    while (getline(input, lines)){
        istringstream iss(lines);
        iss >> c;
        if (c == "v") {
            double a;
            double = b;
            double d;
            iss >> c;
            a = stod(c);
            iss >> c;
            b = stod(c);
            iss >> c;
            d = stod(c);
            vertices.push_back(Vec3f(a * 100.0f,b * 100.0f, d * 100.0f));
        }
        else if (c == "f") {
            int v1;
            int v2_nr;
            int v3_nr;
            iss >> c;
            v1 = stoi(c);
        
            iss >> c;
            v2 = stoi(c);
            
            iss >> c;
            v3 = stoi(c);
            
            Add(make_shared<CPrimTriangle>(vertices[v1 - 1], vertices[v2 - 1], vertices[v3 - 1], pShader));
        }

    }
    in.close();
    cout << "Finished The Parsing" << endl;
}


