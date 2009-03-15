/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADEREXECUTABLEVARCHUNKFIELDS_H_
#define _OSGSHADEREXECUTABLEVARCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderExecutableVarChunk;

OSG_GEN_CONTAINERPTR(ShaderExecutableVarChunk);

/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderExecutableVarChunk *> :
    public FieldTraitsFCPtrBase<ShaderExecutableVarChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderExecutableVarChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderExecutableVarChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderExecutableVarChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderExecutableVarChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderExecutableVarChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderExecutableVarChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderExecutableVarChunk *,
                      RecordedRefCountPolicy  > SFRecShaderExecutableVarChunkPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderExecutableVarChunk *,
                      UnrecordedRefCountPolicy> SFUnrecShaderExecutableVarChunkPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderExecutableVarChunk *,
                      WeakRefCountPolicy      > SFWeakShaderExecutableVarChunkPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderExecutableVarChunk *,
                      NoRefCountPolicy        > SFUncountedShaderExecutableVarChunkPtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderExecutableVarChunk *,
                      RecordedRefCountPolicy  > MFRecShaderExecutableVarChunkPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderExecutableVarChunk *,
                      UnrecordedRefCountPolicy> MFUnrecShaderExecutableVarChunkPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderExecutableVarChunk *,
                      WeakRefCountPolicy      > MFWeakShaderExecutableVarChunkPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderExecutableVarChunk *,
                      NoRefCountPolicy        > MFUncountedShaderExecutableVarChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderExecutableVarChunkPtr : 
    public PointerSField<ShaderExecutableVarChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderExecutableVarChunkPtr : 
    public PointerSField<ShaderExecutableVarChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderExecutableVarChunkPtr :
    public PointerSField<ShaderExecutableVarChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderExecutableVarChunkPtr :
    public PointerSField<ShaderExecutableVarChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderExecutableVarChunkPtr :
    public PointerMField<ShaderExecutableVarChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderExecutableVarChunkPtr :
    public PointerMField<ShaderExecutableVarChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderExecutableVarChunkPtr :
    public PointerMField<ShaderExecutableVarChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderExecutableVarChunkPtr :
    public PointerMField<ShaderExecutableVarChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADEREXECUTABLEVARCHUNKFIELDS_H_ */
