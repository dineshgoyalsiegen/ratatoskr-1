/*******************************************************************************
 * Copyright (C) 2018 Jan Moritz Joseph
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 ******************************************************************************/
#ifndef SRC_TRAFFIC_SYNTHETIC_SYNTHETICPOOL_H_
#define SRC_TRAFFIC_SYNTHETIC_SYNTHETICPOOL_H_

#include "systemc.h"
#include "utils/GlobalInputClass.h"
#include "utils/Report.h"
#include "utils/Structures.h"
#include "SyntheticPacket.h"
#include "model/traffic/TrafficPool.h"


class SyntheticPool: public TrafficPool{
private:
	std::map<int,int> uniform();
	std::map<int,int> transpose();
	std::map<int,int> tornado();
	std::map<int,int> hotspot(int);
	std::map<int,int> bitcomplement();

public:
	SyntheticPool();
	virtual ~SyntheticPool();

	void clear(Task*);
	void start();
};

#endif /* SRC_TRAFFIC_SYNTHETIC_SYNTHETICPOOL_H_ */
