/*
 *  Ex4.cp
 *  Ex4
 *
 *  Created by Omri Klinger on 5/18/13.
 *  Copyright (c) 2013 Omri Klinger. All rights reserved.
 *
 */

#include <iostream>
#include "Ex4.h"
#include "Ex4Priv.h"

void Ex4::HelloWorld(const char * s)
{
	 Ex4Priv *theObj = new Ex4Priv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void Ex4Priv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

