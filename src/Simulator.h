#ifndef _SIMULATOR_H
#define _SIMULATOR_H

#include"MenuWindow.h"
#include "NsFDTD_TM.h"
#include "NsFDTD_TE.h"
#include "StFDTD_TM.h"
#include "StFDTD_TE.h"
#include "Object.h"
#include "type/SimType.hpp"

using namespace std;

class Simulator:public Object{
private:
	Solver *solv;	//Solver

public:
	Simulator(TYPE::sim_type type);
	~Simulator();
	inline int getFieldW(){return solv->getFild()->getNpx();};
	inline int getFieldH(){return solv->getFild()->getNpy();};
	virtual int calc();
	virtual void draw(std::shared_ptr<GUI::ImageBuffer> img);

};


#endif //_SIMULATOR_H