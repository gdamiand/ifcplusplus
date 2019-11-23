/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcProjectedOrTrueLengthEnum.h"

// TYPE IfcProjectedOrTrueLengthEnum = ENUMERATION OF	(PROJECTED_LENGTH	,TRUE_LENGTH);
shared_ptr<BuildingObject> IfcProjectedOrTrueLengthEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcProjectedOrTrueLengthEnum> copy_self( new IfcProjectedOrTrueLengthEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcProjectedOrTrueLengthEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPROJECTEDORTRUELENGTHENUM("; }
	switch( m_enum )
	{
		case ENUM_PROJECTED_LENGTH:	stream << ".PROJECTED_LENGTH."; break;
		case ENUM_TRUE_LENGTH:	stream << ".TRUE_LENGTH."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcProjectedOrTrueLengthEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PROJECTED_LENGTH:	return L"PROJECTED_LENGTH";
		case ENUM_TRUE_LENGTH:	return L"TRUE_LENGTH";
	}
	return L"";
}
shared_ptr<IfcProjectedOrTrueLengthEnum> IfcProjectedOrTrueLengthEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcProjectedOrTrueLengthEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcProjectedOrTrueLengthEnum>(); }
	shared_ptr<IfcProjectedOrTrueLengthEnum> type_object( new IfcProjectedOrTrueLengthEnum() );
	if( std_iequal( arg, L".PROJECTED_LENGTH." ) )
	{
		type_object->m_enum = IfcProjectedOrTrueLengthEnum::ENUM_PROJECTED_LENGTH;
	}
	else if( std_iequal( arg, L".TRUE_LENGTH." ) )
	{
		type_object->m_enum = IfcProjectedOrTrueLengthEnum::ENUM_TRUE_LENGTH;
	}
	return type_object;
}
