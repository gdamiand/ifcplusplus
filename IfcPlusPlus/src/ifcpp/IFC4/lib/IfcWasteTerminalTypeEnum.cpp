/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcWasteTerminalTypeEnum.h"

// TYPE IfcWasteTerminalTypeEnum = ENUMERATION OF	(FLOORTRAP	,FLOORWASTE	,GULLYSUMP	,GULLYTRAP	,ROOFDRAIN	,WASTEDISPOSALUNIT	,WASTETRAP	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcWasteTerminalTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcWasteTerminalTypeEnum> copy_self( new IfcWasteTerminalTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcWasteTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCWASTETERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FLOORTRAP:	stream << ".FLOORTRAP."; break;
		case ENUM_FLOORWASTE:	stream << ".FLOORWASTE."; break;
		case ENUM_GULLYSUMP:	stream << ".GULLYSUMP."; break;
		case ENUM_GULLYTRAP:	stream << ".GULLYTRAP."; break;
		case ENUM_ROOFDRAIN:	stream << ".ROOFDRAIN."; break;
		case ENUM_WASTEDISPOSALUNIT:	stream << ".WASTEDISPOSALUNIT."; break;
		case ENUM_WASTETRAP:	stream << ".WASTETRAP."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcWasteTerminalTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_FLOORTRAP:	return L"FLOORTRAP";
		case ENUM_FLOORWASTE:	return L"FLOORWASTE";
		case ENUM_GULLYSUMP:	return L"GULLYSUMP";
		case ENUM_GULLYTRAP:	return L"GULLYTRAP";
		case ENUM_ROOFDRAIN:	return L"ROOFDRAIN";
		case ENUM_WASTEDISPOSALUNIT:	return L"WASTEDISPOSALUNIT";
		case ENUM_WASTETRAP:	return L"WASTETRAP";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcWasteTerminalTypeEnum> IfcWasteTerminalTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcWasteTerminalTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcWasteTerminalTypeEnum>(); }
	shared_ptr<IfcWasteTerminalTypeEnum> type_object( new IfcWasteTerminalTypeEnum() );
	if( std_iequal( arg, L".FLOORTRAP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_FLOORTRAP;
	}
	else if( std_iequal( arg, L".FLOORWASTE." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_FLOORWASTE;
	}
	else if( std_iequal( arg, L".GULLYSUMP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_GULLYSUMP;
	}
	else if( std_iequal( arg, L".GULLYTRAP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_GULLYTRAP;
	}
	else if( std_iequal( arg, L".ROOFDRAIN." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_ROOFDRAIN;
	}
	else if( std_iequal( arg, L".WASTEDISPOSALUNIT." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_WASTEDISPOSALUNIT;
	}
	else if( std_iequal( arg, L".WASTETRAP." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_WASTETRAP;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcWasteTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
