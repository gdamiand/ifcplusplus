/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcComplexPropertyTemplate.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPropertySetTemplate.h"
#include "ifcpp/IFC4/include/IfcPropertyTemplate.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPropertyTemplate 
IfcPropertyTemplate::IfcPropertyTemplate( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPropertyTemplate::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPropertyTemplate> copy_self( new IfcPropertyTemplate() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid_wstr().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPropertyTemplate::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYTEMPLATE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPropertyTemplate::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertyTemplate::toString() const { return L"IfcPropertyTemplate"; }
void IfcPropertyTemplate::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertyTemplate, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
}
void IfcPropertyTemplate::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPropertyTemplateDefinition::getAttributes( vec_attributes );
}
void IfcPropertyTemplate::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPropertyTemplateDefinition::getAttributesInverse( vec_attributes_inverse );
	if( !m_PartOfComplexTemplate_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> PartOfComplexTemplate_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_PartOfComplexTemplate_inverse.size(); ++i )
		{
			if( !m_PartOfComplexTemplate_inverse[i].expired() )
			{
				PartOfComplexTemplate_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcComplexPropertyTemplate>( m_PartOfComplexTemplate_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "PartOfComplexTemplate_inverse", PartOfComplexTemplate_inverse_vec_obj ) );
	}
	if( !m_PartOfPsetTemplate_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> PartOfPsetTemplate_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_PartOfPsetTemplate_inverse.size(); ++i )
		{
			if( !m_PartOfPsetTemplate_inverse[i].expired() )
			{
				PartOfPsetTemplate_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcPropertySetTemplate>( m_PartOfPsetTemplate_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "PartOfPsetTemplate_inverse", PartOfPsetTemplate_inverse_vec_obj ) );
	}
}
void IfcPropertyTemplate::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPropertyTemplateDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcPropertyTemplate::unlinkFromInverseCounterparts()
{
	IfcPropertyTemplateDefinition::unlinkFromInverseCounterparts();
}
