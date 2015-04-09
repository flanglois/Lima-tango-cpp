/*----- PROTECTED REGION ID(MerlinClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        MerlinClass.h
//
// description : Include for the Merlin root class.
//               This class is the singleton class for
//                the Merlin device class.
//               It contains all properties and methods which the 
//               Merlin requires only once e.g. the commands.
//
// project :     Merlin: A Medipix3RX Quad readout
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef MerlinClass_H
#define MerlinClass_H

#include <tango.h>
#include <Merlin.h>


/*----- PROTECTED REGION END -----*/	//	MerlinClass.h


namespace Merlin_ns
{
/*----- PROTECTED REGION ID(MerlinClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	MerlinClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute softwareVersion class definition
class softwareVersionAttrib: public Tango::Attr
{
public:
	softwareVersionAttrib():Attr("softwareVersion",
			Tango::DEV_FLOAT, Tango::READ) {};
	~softwareVersionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_softwareVersion(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_softwareVersion_allowed(ty);}
};

//	Attribute chargeSumming class definition
class chargeSummingAttrib: public Tango::Attr
{
public:
	chargeSummingAttrib():Attr("chargeSumming",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~chargeSummingAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_chargeSumming(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_chargeSumming(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_chargeSumming_allowed(ty);}
};

//	Attribute colourMode class definition
class colourModeAttrib: public Tango::Attr
{
public:
	colourModeAttrib():Attr("colourMode",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~colourModeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_colourMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_colourMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_colourMode_allowed(ty);}
};

//	Attribute continuousRW class definition
class continuousRWAttrib: public Tango::Attr
{
public:
	continuousRWAttrib():Attr("continuousRW",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~continuousRWAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_continuousRW(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_continuousRW(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_continuousRW_allowed(ty);}
};

//	Attribute counter class definition
class counterAttrib: public Tango::Attr
{
public:
	counterAttrib():Attr("counter",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~counterAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_counter(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_counter(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_counter_allowed(ty);}
};

//	Attribute gain class definition
class gainAttrib: public Tango::Attr
{
public:
	gainAttrib():Attr("gain",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~gainAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_gain(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_gain(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_gain_allowed(ty);}
};

//	Attribute operatingEnergy class definition
class operatingEnergyAttrib: public Tango::Attr
{
public:
	operatingEnergyAttrib():Attr("operatingEnergy",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~operatingEnergyAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_operatingEnergy(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_operatingEnergy(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_operatingEnergy_allowed(ty);}
};

//	Attribute temperature class definition
class temperatureAttrib: public Tango::Attr
{
public:
	temperatureAttrib():Attr("temperature",
			Tango::DEV_FLOAT, Tango::READ) {};
	~temperatureAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_temperature(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_temperature_allowed(ty);}
};

//	Attribute threshold0 class definition
class threshold0Attrib: public Tango::Attr
{
public:
	threshold0Attrib():Attr("threshold0",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold0Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold0(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold0(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold0_allowed(ty);}
};

//	Attribute threshold1 class definition
class threshold1Attrib: public Tango::Attr
{
public:
	threshold1Attrib():Attr("threshold1",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold1(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold1_allowed(ty);}
};

//	Attribute threshold2 class definition
class threshold2Attrib: public Tango::Attr
{
public:
	threshold2Attrib():Attr("threshold2",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold2(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold2_allowed(ty);}
};

//	Attribute threshold3 class definition
class threshold3Attrib: public Tango::Attr
{
public:
	threshold3Attrib():Attr("threshold3",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold3(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold3_allowed(ty);}
};

//	Attribute threshold4 class definition
class threshold4Attrib: public Tango::Attr
{
public:
	threshold4Attrib():Attr("threshold4",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold4Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold4(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold4(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold4_allowed(ty);}
};

//	Attribute threshold5 class definition
class threshold5Attrib: public Tango::Attr
{
public:
	threshold5Attrib():Attr("threshold5",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold5Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold5(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold5(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold5_allowed(ty);}
};

//	Attribute threshold6 class definition
class threshold6Attrib: public Tango::Attr
{
public:
	threshold6Attrib():Attr("threshold6",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold6Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold6(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold6(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold6_allowed(ty);}
};

//	Attribute threshold7 class definition
class threshold7Attrib: public Tango::Attr
{
public:
	threshold7Attrib():Attr("threshold7",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~threshold7Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_threshold7(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_threshold7(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_threshold7_allowed(ty);}
};

//	Attribute triggerStartType class definition
class triggerStartTypeAttrib: public Tango::Attr
{
public:
	triggerStartTypeAttrib():Attr("triggerStartType",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~triggerStartTypeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerStartType(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerStartType(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerStartType_allowed(ty);}
};

//	Attribute triggerStopType class definition
class triggerStopTypeAttrib: public Tango::Attr
{
public:
	triggerStopTypeAttrib():Attr("triggerStopType",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~triggerStopTypeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerStopType(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerStopType(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerStopType_allowed(ty);}
};

//	Attribute triggerOutTTL class definition
class triggerOutTTLAttrib: public Tango::Attr
{
public:
	triggerOutTTLAttrib():Attr("triggerOutTTL",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~triggerOutTTLAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerOutTTL(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerOutTTL(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerOutTTL_allowed(ty);}
};

//	Attribute triggerOutLVDS class definition
class triggerOutLVDSAttrib: public Tango::Attr
{
public:
	triggerOutLVDSAttrib():Attr("triggerOutLVDS",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~triggerOutLVDSAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerOutLVDS(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerOutLVDS(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerOutLVDS_allowed(ty);}
};

//	Attribute triggerOutTTLInvert class definition
class triggerOutTTLInvertAttrib: public Tango::Attr
{
public:
	triggerOutTTLInvertAttrib():Attr("triggerOutTTLInvert",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~triggerOutTTLInvertAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerOutTTLInvert(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerOutTTLInvert(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerOutTTLInvert_allowed(ty);}
};

//	Attribute triggerOutLVDSInvert class definition
class triggerOutLVDSInvertAttrib: public Tango::Attr
{
public:
	triggerOutLVDSInvertAttrib():Attr("triggerOutLVDSInvert",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~triggerOutLVDSInvertAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerOutLVDSInvert(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerOutLVDSInvert(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerOutLVDSInvert_allowed(ty);}
};

//	Attribute triggerOutTTLDelay class definition
class triggerOutTTLDelayAttrib: public Tango::Attr
{
public:
	triggerOutTTLDelayAttrib():Attr("triggerOutTTLDelay",
			Tango::DEV_LONG64, Tango::READ_WRITE) {};
	~triggerOutTTLDelayAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerOutTTLDelay(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerOutTTLDelay(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerOutTTLDelay_allowed(ty);}
};

//	Attribute triggerOutLVDSDelay class definition
class triggerOutLVDSDelayAttrib: public Tango::Attr
{
public:
	triggerOutLVDSDelayAttrib():Attr("triggerOutLVDSDelay",
			Tango::DEV_LONG64, Tango::READ_WRITE) {};
	~triggerOutLVDSDelayAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerOutLVDSDelay(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerOutLVDSDelay(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerOutLVDSDelay_allowed(ty);}
};

//	Attribute triggerUseDelay class definition
class triggerUseDelayAttrib: public Tango::Attr
{
public:
	triggerUseDelayAttrib():Attr("triggerUseDelay",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~triggerUseDelayAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_triggerUseDelay(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_triggerUseDelay(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_triggerUseDelay_allowed(ty);}
};

//	Attribute thScanNum class definition
class thScanNumAttrib: public Tango::Attr
{
public:
	thScanNumAttrib():Attr("thScanNum",
			Tango::DEV_LONG, Tango::READ_WRITE) {};
	~thScanNumAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_thScanNum(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_thScanNum(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_thScanNum_allowed(ty);}
};

//	Attribute thStart class definition
class thStartAttrib: public Tango::Attr
{
public:
	thStartAttrib():Attr("thStart",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~thStartAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_thStart(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_thStart(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_thStart_allowed(ty);}
};

//	Attribute thStop class definition
class thStopAttrib: public Tango::Attr
{
public:
	thStopAttrib():Attr("thStop",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~thStopAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_thStop(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_thStop(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_thStop_allowed(ty);}
};

//	Attribute thStep class definition
class thStepAttrib: public Tango::Attr
{
public:
	thStepAttrib():Attr("thStep",
			Tango::DEV_FLOAT, Tango::READ_WRITE) {};
	~thStepAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Merlin *>(dev))->read_thStep(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Merlin *>(dev))->write_thStep(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Merlin *>(dev))->is_thStep_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command DevState class definition
class DevStateClass : public Tango::Command
{
public:
	DevStateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevStateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevStateClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Merlin *>(dev))->is_DevState_allowed(any);}
};

//	Command SoftTrigger class definition
class SoftTriggerClass : public Tango::Command
{
public:
	SoftTriggerClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SoftTriggerClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SoftTriggerClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Merlin *>(dev))->is_SoftTrigger_allowed(any);}
};

//	Command Abort class definition
class AbortClass : public Tango::Command
{
public:
	AbortClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AbortClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AbortClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Merlin *>(dev))->is_Abort_allowed(any);}
};

//	Command THScan class definition
class THScanClass : public Tango::Command
{
public:
	THScanClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	THScanClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~THScanClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Merlin *>(dev))->is_THScan_allowed(any);}
};

//	Command ResetHW class definition
class ResetHWClass : public Tango::Command
{
public:
	ResetHWClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetHWClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetHWClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Merlin *>(dev))->is_ResetHW_allowed(any);}
};


/**
 *	The MerlinClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  MerlinClass : public Tango::DeviceClass
#else
class MerlinClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(MerlinClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	MerlinClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static MerlinClass *init(const char *);
		static MerlinClass *instance();
		~MerlinClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		MerlinClass(string &);
		static MerlinClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	Merlin_H
