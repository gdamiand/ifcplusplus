/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcContext.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObject.h"
#include "ifcpp/IFC4/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPropertySetDefinition.h"
#include "ifcpp/IFC4/include/IfcPropertySetDefinitionSelect.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelDefinesByProperties 
IfcRelDefinesByProperties::IfcRelDefinesByProperties( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRelDefinesByProperties::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelDefinesByProperties> copy_self( new IfcRelDefinesByProperties() );
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
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.emplace_back( dynamic_pointer_cast<IfcObjectDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatingPropertyDefinition ) { copy_self->m_RelatingPropertyDefinition = dynamic_pointer_cast<IfcPropertySetDefinitionSelect>( m_RelatingPropertyDefinition->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelDefinesByProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELDEFINESBYPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ",";
	if( m_RelatingPropertyDefinition ) { m_RelatingPropertyDefinition->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcRelDefinesByProperties::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelDefinesByProperties::toString() const { return L"IfcRelDefinesByProperties"; }
void IfcRelDefinesByProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelDefinesByProperties, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReferenceList( args[4], m_RelatedObjects, map );
	m_RelatingPropertyDefinition = IfcPropertySetDefinitionSelect::createObjectFromSTEP( args[5], map );
}
void IfcRelDefinesByProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelDefines::getAttributes( vec_attributes );
	if( !m_RelatedObjects.empty() )
	{
		shared_ptr<AttributeObjectVector> RelatedObjects_vec_object( new AttributeObjectVector() );
		std::copy( m_RelatedObjects.begin(), m_RelatedObjects.end(), std::back_inserter( RelatedObjects_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RelatedObjects", RelatedObjects_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "RelatingPropertyDefinition", m_RelatingPropertyDefinition ) );
}
void IfcRelDefinesByProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelDefines::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelDefinesByProperties::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelDefines::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelDefinesByProperties> ptr_self = dynamic_pointer_cast<IfcRelDefinesByProperties>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelDefinesByProperties::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		shared_ptr<IfcContext>  RelatedObjects_IfcContext = dynamic_pointer_cast<IfcContext>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcContext )
		{
			RelatedObjects_IfcContext->m_IsDefinedBy_inverse.emplace_back( ptr_self );
		}
		shared_ptr<IfcObject>  RelatedObjects_IfcObject = dynamic_pointer_cast<IfcObject>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcObject )
		{
			RelatedObjects_IfcObject->m_IsDefinedBy_inverse.emplace_back( ptr_self );
		}
	}
	shared_ptr<IfcPropertySetDefinition>  RelatingPropertyDefinition_IfcPropertySetDefinition = dynamic_pointer_cast<IfcPropertySetDefinition>( m_RelatingPropertyDefinition );
	if( RelatingPropertyDefinition_IfcPropertySetDefinition )
	{
		RelatingPropertyDefinition_IfcPropertySetDefinition->m_DefinesOccurrence_inverse.emplace_back( ptr_self );
	}
}
void IfcRelDefinesByProperties::unlinkFromInverseCounterparts()
{
	IfcRelDefines::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		shared_ptr<IfcContext>  RelatedObjects_IfcContext = dynamic_pointer_cast<IfcContext>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcContext )
		{
			std::vector<weak_ptr<IfcRelDefinesByProperties> >& IsDefinedBy_inverse = RelatedObjects_IfcContext->m_IsDefinedBy_inverse;
			for( auto it_IsDefinedBy_inverse = IsDefinedBy_inverse.begin(); it_IsDefinedBy_inverse != IsDefinedBy_inverse.end(); )
			{
				weak_ptr<IfcRelDefinesByProperties> self_candidate_weak = *it_IsDefinedBy_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsDefinedBy_inverse;
					continue;
				}
				shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_IsDefinedBy_inverse );
				if( self_candidate.get() == this )
				{
					it_IsDefinedBy_inverse= IsDefinedBy_inverse.erase( it_IsDefinedBy_inverse );
				}
				else
				{
					++it_IsDefinedBy_inverse;
				}
			}
		}
		shared_ptr<IfcObject>  RelatedObjects_IfcObject = dynamic_pointer_cast<IfcObject>( m_RelatedObjects[i] );
		if( RelatedObjects_IfcObject )
		{
			std::vector<weak_ptr<IfcRelDefinesByProperties> >& IsDefinedBy_inverse = RelatedObjects_IfcObject->m_IsDefinedBy_inverse;
			for( auto it_IsDefinedBy_inverse = IsDefinedBy_inverse.begin(); it_IsDefinedBy_inverse != IsDefinedBy_inverse.end(); )
			{
				weak_ptr<IfcRelDefinesByProperties> self_candidate_weak = *it_IsDefinedBy_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_IsDefinedBy_inverse;
					continue;
				}
				shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_IsDefinedBy_inverse );
				if( self_candidate.get() == this )
				{
					it_IsDefinedBy_inverse= IsDefinedBy_inverse.erase( it_IsDefinedBy_inverse );
				}
				else
				{
					++it_IsDefinedBy_inverse;
				}
			}
		}
	}
	shared_ptr<IfcPropertySetDefinition>  RelatingPropertyDefinition_IfcPropertySetDefinition = dynamic_pointer_cast<IfcPropertySetDefinition>( m_RelatingPropertyDefinition );
	if( RelatingPropertyDefinition_IfcPropertySetDefinition )
	{
		std::vector<weak_ptr<IfcRelDefinesByProperties> >& DefinesOccurrence_inverse = RelatingPropertyDefinition_IfcPropertySetDefinition->m_DefinesOccurrence_inverse;
		for( auto it_DefinesOccurrence_inverse = DefinesOccurrence_inverse.begin(); it_DefinesOccurrence_inverse != DefinesOccurrence_inverse.end(); )
		{
			weak_ptr<IfcRelDefinesByProperties> self_candidate_weak = *it_DefinesOccurrence_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_DefinesOccurrence_inverse;
				continue;
			}
			shared_ptr<IfcRelDefinesByProperties> self_candidate( *it_DefinesOccurrence_inverse );
			if( self_candidate.get() == this )
			{
				it_DefinesOccurrence_inverse= DefinesOccurrence_inverse.erase( it_DefinesOccurrence_inverse );
			}
			else
			{
				++it_DefinesOccurrence_inverse;
			}
		}
	}
}
