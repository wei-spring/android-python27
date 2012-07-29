/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:36 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtOpenGL.h"

#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 39 "sipQtOpenGLQGL.cpp"

#line 66 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 43 "sipQtOpenGLQGL.cpp"


extern "C" {static PyObject *meth_QGL_setPreferredPaintEngine(PyObject *, PyObject *);}
static PyObject *meth_QGL_setPreferredPaintEngine(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPaintEngine::Type a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QPaintEngine_Type, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QGL::setPreferredPaintEngine(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_setPreferredPaintEngine, NULL);

    return NULL;
}


static PyMethodDef methods_QGL[] = {
    {SIP_MLNAME_CAST(sipName_setPreferredPaintEngine), meth_QGL_setPreferredPaintEngine, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QGL[] = {
    {sipName_AccumBuffer, QGL::AccumBuffer, 1},
    {sipName_AlphaChannel, QGL::AlphaChannel, 1},
    {sipName_ColorIndex, QGL::ColorIndex, 1},
    {sipName_DeprecatedFunctions, QGL::DeprecatedFunctions, 1},
    {sipName_DepthBuffer, QGL::DepthBuffer, 1},
    {sipName_DirectRendering, QGL::DirectRendering, 1},
    {sipName_DoubleBuffer, QGL::DoubleBuffer, 1},
    {sipName_HasOverlay, QGL::HasOverlay, 1},
    {sipName_IndirectRendering, QGL::IndirectRendering, 1},
    {sipName_NoAccumBuffer, QGL::NoAccumBuffer, 1},
    {sipName_NoAlphaChannel, QGL::NoAlphaChannel, 1},
    {sipName_NoDeprecatedFunctions, QGL::NoDeprecatedFunctions, 1},
    {sipName_NoDepthBuffer, QGL::NoDepthBuffer, 1},
    {sipName_NoOverlay, QGL::NoOverlay, 1},
    {sipName_NoSampleBuffers, QGL::NoSampleBuffers, 1},
    {sipName_NoStencilBuffer, QGL::NoStencilBuffer, 1},
    {sipName_NoStereoBuffers, QGL::NoStereoBuffers, 1},
    {sipName_Rgba, QGL::Rgba, 1},
    {sipName_SampleBuffers, QGL::SampleBuffers, 1},
    {sipName_SingleBuffer, QGL::SingleBuffer, 1},
    {sipName_StencilBuffer, QGL::StencilBuffer, 1},
    {sipName_StereoBuffers, QGL::StereoBuffers, 1},
};


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGL = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_QGL,
        {0}
    },
    {
        sipNameNr_QGL,
        {0, 0, 1},
        1, methods_QGL,
        22, enummembers_QGL,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};