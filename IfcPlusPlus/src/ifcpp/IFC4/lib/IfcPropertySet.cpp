/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcProperty.h"
#include "ifcpp/IFC4/include/IfcPropertySet.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeObject.h"

// ENTITY IfcPropertySet 
IfcPropertySet::IfcPropertySet( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPropertySet::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPropertySet> copy_self( new IfcPropertySet() );
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
	for( size_t ii=0; ii<m_HasProperties.size(); ++ii )
	{
		auto item_ii = m_HasProperties[ii];
		if( item_ii )
		{
			copy_self->m_HasProperties.emplace_back( dynamic_pointer_cast<IfcProperty>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcPropertySet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYSET" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_HasProperties );
	stream << ");";
}
void IfcPropertySet::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertySet::toString() const { return L"IfcPropertySet"; }
void IfcPropertySet::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertySet, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReferenceList( args[4], m_HasProperties, map );
}
void IfcPropertySet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPropertySetDefinition::getAttributes( vec_attributes );
	if( !m_HasProperties.empty() )
	{
		shared_ptr<AttributeObjectVector> HasProperties_vec_object( new AttributeObjectVector() );
		std::copy( m_HasProperties.begin(), m_HasProperties.end(), std::back_inserter( HasProperties_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "HasProperties", HasProperties_vec_object ) );
	}
}
void IfcPropertySet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPropertySetDefinition::getAttributesInverse( vec_attributes_inverse );
}
void IfcPropertySet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPropertySetDefinition::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPropertySet> ptr_self = dynamic_pointer_cast<IfcPropertySet>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcPropertySet::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_HasProperties.size(); ++i )
	{
		if( m_HasProperties[i] )
		{
			m_HasProperties[i]->m_PartOfPset_inverse.emplace_back( ptr_self );
		}
	}
}
void IfcPropertySet::unlinkFromInverseCounterparts()
{
	IfcPropertySetDefinition::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_HasProperties.size(); ++i )
	{
		if( m_HasProperties[i] )
		{
			std::vector<weak_ptr<IfcPropertySet> >& PartOfPset_inverse = m_HasProperties[i]->m_PartOfPset_inverse;
			for( auto it_PartOfPset_inverse = PartOfPset_inverse.begin(); it_PartOfPset_inverse != PartOfPset_inverse.end(); )
			{
				weak_ptr<IfcPropertySet> self_candidate_weak = *it_PartOfPset_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_PartOfPset_inverse;
					continue;
				}
				shared_ptr<IfcPropertySet> self_candidate( *it_PartOfPset_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfPset_inverse= PartOfPset_inverse.erase( it_PartOfPset_inverse );
				}
				else
				{
					++it_PartOfPset_inverse;
				}
			}
		}
	}
}
