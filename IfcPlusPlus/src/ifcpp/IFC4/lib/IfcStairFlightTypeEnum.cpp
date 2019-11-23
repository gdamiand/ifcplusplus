/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcStairFlightTypeEnum.h"

// TYPE IfcStairFlightTypeEnum = ENUMERATION OF	(STRAIGHT	,WINDER	,SPIRAL	,CURVED	,FREEFORM	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcStairFlightTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStairFlightTypeEnum> copy_self( new IfcStairFlightTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcStairFlightTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSTAIRFLIGHTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_STRAIGHT:	stream << ".STRAIGHT."; break;
		case ENUM_WINDER:	stream << ".WINDER."; break;
		case ENUM_SPIRAL:	stream << ".SPIRAL."; break;
		case ENUM_CURVED:	stream << ".CURVED."; break;
		case ENUM_FREEFORM:	stream << ".FREEFORM."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcStairFlightTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_STRAIGHT:	return L"STRAIGHT";
		case ENUM_WINDER:	return L"WINDER";
		case ENUM_SPIRAL:	return L"SPIRAL";
		case ENUM_CURVED:	return L"CURVED";
		case ENUM_FREEFORM:	return L"FREEFORM";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcStairFlightTypeEnum> IfcStairFlightTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcStairFlightTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcStairFlightTypeEnum>(); }
	shared_ptr<IfcStairFlightTypeEnum> type_object( new IfcStairFlightTypeEnum() );
	if( std_iequal( arg, L".STRAIGHT." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_STRAIGHT;
	}
	else if( std_iequal( arg, L".WINDER." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_WINDER;
	}
	else if( std_iequal( arg, L".SPIRAL." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_SPIRAL;
	}
	else if( std_iequal( arg, L".CURVED." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_CURVED;
	}
	else if( std_iequal( arg, L".FREEFORM." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_FREEFORM;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStairFlightTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
