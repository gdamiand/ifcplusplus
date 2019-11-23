/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcSectionTypeEnum.h"

// TYPE IfcSectionTypeEnum = ENUMERATION OF	(UNIFORM	,TAPERED);
shared_ptr<BuildingObject> IfcSectionTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSectionTypeEnum> copy_self( new IfcSectionTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSectionTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSECTIONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_UNIFORM:	stream << ".UNIFORM."; break;
		case ENUM_TAPERED:	stream << ".TAPERED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSectionTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_UNIFORM:	return L"UNIFORM";
		case ENUM_TAPERED:	return L"TAPERED";
	}
	return L"";
}
shared_ptr<IfcSectionTypeEnum> IfcSectionTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSectionTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSectionTypeEnum>(); }
	shared_ptr<IfcSectionTypeEnum> type_object( new IfcSectionTypeEnum() );
	if( std_iequal( arg, L".UNIFORM." ) )
	{
		type_object->m_enum = IfcSectionTypeEnum::ENUM_UNIFORM;
	}
	else if( std_iequal( arg, L".TAPERED." ) )
	{
		type_object->m_enum = IfcSectionTypeEnum::ENUM_TAPERED;
	}
	return type_object;
}
