#include "surfacematch.h"

HTuple gIsSinglePose;
HTuple gTerminationButtonLabel;
HTuple gInfoDecor;
HTuple gInfoPos;
HTuple gTitlePos;
HTuple gTitleDecor;
HTuple gAlphaDeselected;
HTuple gDispObjOffset;
HTuple gLabelsDecor;
HTuple gUsesOpenGL;

HTuple ExpGetGlobalVar_gIsSinglePose(void) {
    return gIsSinglePose;
}

void ExpSetGlobalVar_gIsSinglePose(HTuple val) {
    gIsSinglePose = val;
}

HTuple ExpGetGlobalVar_gTerminationButtonLabel(void) {
    return gTerminationButtonLabel;
}

void ExpSetGlobalVar_gTerminationButtonLabel(HTuple val) {
    gTerminationButtonLabel = val;
}

HTuple ExpGetGlobalVar_gInfoDecor(void) {
    return gInfoDecor;
}

void ExpSetGlobalVar_gInfoDecor(HTuple val) {
    gInfoDecor = val;
}

HTuple ExpGetGlobalVar_gInfoPos(void) {
    return gInfoPos;
}

void ExpSetGlobalVar_gInfoPos(HTuple val) {
    gInfoPos = val;
}

HTuple ExpGetGlobalVar_gTitlePos(void) {
    return gTitlePos;
}

void ExpSetGlobalVar_gTitlePos(HTuple val) {
    gTitlePos = val;
}

HTuple ExpGetGlobalVar_gTitleDecor(void) {
    return gTitleDecor;
}

void ExpSetGlobalVar_gTitleDecor(HTuple val) {
    gTitleDecor = val;
}

HTuple ExpGetGlobalVar_gAlphaDeselected(void) {
    return gAlphaDeselected;
}

void ExpSetGlobalVar_gAlphaDeselected(HTuple val) {
    gAlphaDeselected = val;
}

HTuple ExpGetGlobalVar_gDispObjOffset(void) {
    return gDispObjOffset;
}

void ExpSetGlobalVar_gDispObjOffset(HTuple val) {
    gDispObjOffset = val;
}

HTuple ExpGetGlobalVar_gLabelsDecor(void) {
    return gLabelsDecor;
}

void ExpSetGlobalVar_gLabelsDecor(HTuple val) {
    gLabelsDecor = val;
}

HTuple ExpGetGlobalVar_gUsesOpenGL(void) {
    return gUsesOpenGL;
}

void ExpSetGlobalVar_gUsesOpenGL(HTuple val) {
    gUsesOpenGL = val;
}

// Procedure declarations
// External procedures
// Chapter: Graphics / Output
// Short Description: Reflect the pose change that was introduced by the user by moving the mouse
void analyze_graph_event(HObject ho_BackgroundImage, HTuple hv_MouseMapping, HTuple hv_Button,
                         HTuple hv_Row, HTuple hv_Column, HTuple hv_WindowHandle, HTuple hv_WindowHandleBuffer,
                         HTuple hv_VirtualTrackball, HTuple hv_TrackballSize, HTuple hv_SelectedObjectIn,
                         HTuple hv_Scene3D, HTuple hv_AlphaOrig, HTuple hv_ObjectModel3DID, HTuple hv_CamParam,
                         HTuple hv_Labels, HTuple hv_Title, HTuple hv_Information, HTuple hv_GenParamName,
                         HTuple hv_GenParamValue, HTuple hv_PosesIn, HTuple hv_ButtonHoldIn, HTuple hv_TBCenter,
                         HTuple hv_TBSize, HTuple hv_WindowCenteredRotationlIn, HTuple hv_MaxNumModels,
                         HTuple *hv_PosesOut, HTuple *hv_SelectedObjectOut, HTuple *hv_ButtonHoldOut,
                         HTuple *hv_WindowCenteredRotationOut);

// Chapter: Graphics / Parameters
void color_string_to_rgb(HTuple hv_Color, HTuple *hv_RGB);

// Chapter: Graphics / Output
// Short Description: Determine the optimum distance of the object to obtain a reasonable visualization
void determine_optimum_pose_distance(HTuple hv_ObjectModel3DID, HTuple hv_CamParam,
                                     HTuple hv_ImageCoverage, HTuple hv_PoseIn, HTuple *hv_PoseOut);

// Chapter: Develop
// Short Description: Switch dev_update_pc, dev_update_var and dev_update_window to 'off'.
void dev_update_off();

// Chapter: Graphics / Output
// Short Description: Displays a continue button.
void disp_continue_button(HTuple hv_WindowHandle);

// Chapter: Graphics / Text
// Short Description: This procedure writes a text message.
void disp_message(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem,
                  HTuple hv_Row, HTuple hv_Column, HTuple hv_Color, HTuple hv_Box);

// Chapter: Graphics / Output
// Short Description: Can replace disp_object_model_3d if there is no OpenGL available.
void disp_object_model_no_opengl(HObject *ho_ModelContours, HTuple hv_ObjectModel3DID,
                                 HTuple hv_GenParamName, HTuple hv_GenParamValue, HTuple hv_WindowHandleBuffer,
                                 HTuple hv_CamParam, HTuple hv_PosesOut);

// Chapter: Graphics / Text
// Short Description: This procedure writes a text message.
void disp_text_button(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem,
                      HTuple hv_Row, HTuple hv_Column, HTuple hv_TextColor, HTuple hv_ButtonColor);

// Chapter: Graphics / Output
void disp_title_and_information(HTuple hv_WindowHandle, HTuple hv_Title, HTuple hv_Information);

// Chapter: Graphics / Output
// Short Description: Renders 3D object models in a buffer window.
void dump_image_output(HObject ho_BackgroundImage, HTuple hv_WindowHandleBuffer,
                       HTuple hv_Scene3D, HTuple hv_AlphaOrig, HTuple hv_ObjectModel3DID, HTuple hv_GenParamName,
                       HTuple hv_GenParamValue, HTuple hv_CamParam, HTuple hv_Poses, HTuple hv_ColorImage,
                       HTuple hv_Title, HTuple hv_Information, HTuple hv_Labels, HTuple hv_VisualizeTrackball,
                       HTuple hv_DisplayContinueButton, HTuple hv_TrackballCenterRow, HTuple hv_TrackballCenterCol,
                       HTuple hv_TrackballRadiusPixel, HTuple hv_SelectedObject, HTuple hv_VisualizeRotationCenter,
                       HTuple hv_RotationCenter);

// Chapter: Calibration / Camera Parameters
// Short Description: Generate a camera parameter tuple for an area scan camera with distortions modeled by the division model.
void gen_cam_par_area_scan_division(HTuple hv_Focus, HTuple hv_Kappa, HTuple hv_Sx,
                                    HTuple hv_Sy, HTuple hv_Cx, HTuple hv_Cy, HTuple hv_ImageWidth,
                                    HTuple hv_ImageHeight,
                                    HTuple *hv_CameraParam);

// Chapter: Calibration / Camera Parameters
// Short Description: Get the value of a specified camera parameter from the camera parameter tuple.
void get_cam_par_data(HTuple hv_CameraParam, HTuple hv_ParamName, HTuple *hv_ParamValue);

// Chapter: Calibration / Camera Parameters
// Short Description: Get the names of the parameters in a camera parameter tuple.
void get_cam_par_names(HTuple hv_CameraParam, HTuple *hv_CameraType, HTuple *hv_ParamNames);

// Chapter: Graphics / Output
// Short Description: Compute the center of all given 3D object models.
void get_object_models_center(HTuple hv_ObjectModel3DID, HTuple *hv_Center);

// Chapter: Graphics / Output
// Short Description: Get the center of the virtual trackback that is used to move the camera.
void get_trackball_center(HTuple hv_SelectedObject, HTuple hv_TrackballRadiusPixel,
                          HTuple hv_ObjectModel3D, HTuple hv_Poses, HTuple *hv_TBCenter, HTuple *hv_TBSize);

// Chapter: Graphics / Output
// Short Description: Get the center of the virtual trackback that is used to move the camera (version for inspection_mode = 'surface').
void get_trackball_center_fixed(HTuple hv_SelectedObject, HTuple hv_TrackballCenterRow,
                                HTuple hv_TrackballCenterCol, HTuple hv_TrackballRadiusPixel, HTuple hv_Scene3D,
                                HTuple hv_ObjectModel3DID, HTuple hv_Poses, HTuple hv_WindowHandleBuffer,
                                HTuple hv_CamParam,
                                HTuple hv_GenParamName, HTuple hv_GenParamValue, HTuple *hv_TBCenter,
                                HTuple *hv_TBSize);

// Chapter: Graphics / Output
// Short Description: Get string extends of several lines.
void max_line_width(HTuple hv_WindowHandle, HTuple hv_Lines, HTuple *hv_MaxWidth);

// Chapter: Graphics / Output
// Short Description: Project an image point onto the trackball
void project_point_on_trackball(HTuple hv_X, HTuple hv_Y, HTuple hv_VirtualTrackball,
                                HTuple hv_TrackballSize, HTuple *hv_V);

// Chapter: Calibration / Camera Parameters
// Short Description: Set the value of a specified camera parameter in the camera parameter tuple.
void set_cam_par_data(HTuple hv_CameraParamIn, HTuple hv_ParamName, HTuple hv_ParamValue,
                      HTuple *hv_CameraParamOut);

// Chapter: Graphics / Text
// Short Description: Set font independent of OS
void set_display_font(HTuple hv_WindowHandle, HTuple hv_Size, HTuple hv_Font, HTuple hv_Bold,
                      HTuple hv_Slant);

// Chapter: Graphics / Output
// Short Description: Compute the 3D rotation from the mouse movement
void trackball(HTuple hv_MX1, HTuple hv_MY1, HTuple hv_MX2, HTuple hv_MY2, HTuple hv_VirtualTrackball,
               HTuple hv_TrackballSize, HTuple hv_SensFactor, HTuple *hv_QuatRotation);

// Chapter: Tuple / Arithmetic
// Short Description: Calculates the cross product of two vectors of length 3.
void tuple_vector_cross_product(HTuple hv_V1, HTuple hv_V2, HTuple *hv_VC);

// Chapter: Graphics / Output
// Short Description: Interactively display 3D object models
void visualize_object_model_3d(bool isClickable, HTuple hv_WindowHandle, HTuple hv_ObjectModel3D,
                               HTuple hv_CamParam, HTuple hv_PoseIn, HTuple hv_GenParamName, HTuple hv_GenParamValue,
                               HTuple hv_Title, HTuple hv_Label, HTuple hv_Information, HTuple *hv_PoseOut);

// Procedures
// External procedures
// Chapter: Graphics / Output
// Short Description: Reflect the pose change that was introduced by the user by moving the mouse
void analyze_graph_event(HObject ho_BackgroundImage, HTuple hv_MouseMapping, HTuple hv_Button,
                         HTuple hv_Row, HTuple hv_Column, HTuple hv_WindowHandle, HTuple hv_WindowHandleBuffer,
                         HTuple hv_VirtualTrackball, HTuple hv_TrackballSize, HTuple hv_SelectedObjectIn,
                         HTuple hv_Scene3D, HTuple hv_AlphaOrig, HTuple hv_ObjectModel3DID, HTuple hv_CamParam,
                         HTuple hv_Labels, HTuple hv_Title, HTuple hv_Information, HTuple hv_GenParamName,
                         HTuple hv_GenParamValue, HTuple hv_PosesIn, HTuple hv_ButtonHoldIn, HTuple hv_TBCenter,
                         HTuple hv_TBSize, HTuple hv_WindowCenteredRotationlIn, HTuple hv_MaxNumModels,
                         HTuple *hv_PosesOut, HTuple *hv_SelectedObjectOut, HTuple *hv_ButtonHoldOut,
                         HTuple *hv_WindowCenteredRotationOut) {

    // Local iconic variables
    HObject ho_ImageDump;

    // Local control variables
    HTuple ExpTmpLocalVar_gIsSinglePose, hv_VisualizeTB;
    HTuple hv_InvLog2, hv_Seconds, hv_ModelIndex, hv_Exception1;
    HTuple hv_HomMat3DIdentity, hv_NumModels, hv_Width, hv_Height;
    HTuple hv_MinImageSize, hv_TrackballRadiusPixel, hv_TrackballCenterRow;
    HTuple hv_TrackballCenterCol, hv_NumChannels, hv_ColorImage;
    HTuple hv_BAnd, hv_SensFactor, hv_IsButtonTrans, hv_IsButtonRot;
    HTuple hv_IsButtonDist, hv_MRow1, hv_MCol1, hv_ButtonLoop;
    HTuple hv_MRow2, hv_MCol2, hv_PX, hv_PY, hv_PZ, hv_QX1;
    HTuple hv_QY1, hv_QZ1, hv_QX2, hv_QY2, hv_QZ2, hv_Len;
    HTuple hv_Dist, hv_Translate, hv_Index, hv_PoseIn, hv_HomMat3DIn;
    HTuple hv_HomMat3DOut, hv_PoseOut, hv_Indices, hv_Sequence;
    HTuple hv_Mod, hv_SequenceReal, hv_Sequence2Int, hv_Selected;
    HTuple hv_InvSelected, hv_Exception, hv_DRow, hv_TranslateZ;
    HTuple hv_MX1, hv_MY1, hv_MX2, hv_MY2, hv_RelQuaternion;
    HTuple hv_HomMat3DRotRel, hv_HomMat3DInTmp1, hv_HomMat3DInTmp;
    HTuple hv_PosesOut2;

    //This procedure reflects
    //- the pose change that was introduced by the user by
    //  moving the mouse
    //- the selection of a single object
    //
    //global tuple gIsSinglePose
    //
    (*hv_ButtonHoldOut) = hv_ButtonHoldIn;
    (*hv_PosesOut) = hv_PosesIn;
    (*hv_SelectedObjectOut) = hv_SelectedObjectIn;
    (*hv_WindowCenteredRotationOut) = hv_WindowCenteredRotationlIn;
    hv_VisualizeTB = int(((*hv_SelectedObjectOut).TupleMax()) != 0);
    hv_InvLog2 = 1.0 / (HTuple(2).TupleLog());
    //
    if (0 != (int(hv_Button == HTuple(hv_MouseMapping[6])))) {
        if (0 != (*hv_ButtonHoldOut)) {
            return;
        }
        //Ctrl (16) + Alt (32) + left mouse button (1) => Toggle rotation center position
        //If WindowCenteredRotation is not 1, set it to 1, otherwise, set it to 2
        CountSeconds(&hv_Seconds);
        if (0 != (int((*hv_WindowCenteredRotationOut) == 1))) {
            (*hv_WindowCenteredRotationOut) = 2;
        } else {
            (*hv_WindowCenteredRotationOut) = 1;
        }
        (*hv_ButtonHoldOut) = 1;
        return;
    }
    if (0 != (HTuple(int(hv_Button == HTuple(hv_MouseMapping[5]))).TupleAnd(
            int((hv_ObjectModel3DID.TupleLength()) <= hv_MaxNumModels)))) {
        if (0 != (*hv_ButtonHoldOut)) {
            return;
        }
        //Ctrl (16) + left mouse button (1) => Select an object
        try {
            SetScene3dParam(hv_Scene3D, "object_index_persistence", "true");
            DisplayScene3d(hv_WindowHandleBuffer, hv_Scene3D, 0);
            GetDisplayScene3dInfo(hv_WindowHandleBuffer, hv_Scene3D, hv_Row, hv_Column,
                                  "object_index", &hv_ModelIndex);
            SetScene3dParam(hv_Scene3D, "object_index_persistence", "false");
        }
            // catch (Exception1)
        catch (HException &HDevExpDefaultException) {
            HDevExpDefaultException.ToHTuple(&hv_Exception1);
            //* NO OpenGL, no selection possible
            return;
        }
        if (0 != (int(hv_ModelIndex == -1))) {
            //Background click:
            if (0 != (int(((*hv_SelectedObjectOut).TupleSum()) == ((*hv_SelectedObjectOut).TupleLength())))) {
                //If all objects are already selected, deselect all
                (*hv_SelectedObjectOut) = HTuple(hv_ObjectModel3DID.TupleLength(), 0);
            } else {
                //Otherwise select all
                (*hv_SelectedObjectOut) = HTuple(hv_ObjectModel3DID.TupleLength(), 1);
            }
        } else {
            //Object click:
            (*hv_SelectedObjectOut)[hv_ModelIndex] = HTuple((*hv_SelectedObjectOut)[hv_ModelIndex]).TupleNot();
        }
        (*hv_ButtonHoldOut) = 1;
    } else {
        //Change the pose
        HomMat3dIdentity(&hv_HomMat3DIdentity);
        hv_NumModels = hv_ObjectModel3DID.TupleLength();
        get_cam_par_data(hv_CamParam, "image_width", &hv_Width);
        get_cam_par_data(hv_CamParam, "image_height", &hv_Height);
        hv_MinImageSize = (hv_Width.TupleConcat(hv_Height)).TupleMin();
        hv_TrackballRadiusPixel = (hv_TrackballSize * hv_MinImageSize) / 2.0;
        //Set trackball fixed in the center of the window
        hv_TrackballCenterRow = hv_Height / 2;
        hv_TrackballCenterCol = hv_Width / 2;
        if (0 != (int((hv_ObjectModel3DID.TupleLength()) < hv_MaxNumModels))) {
            if (0 != (int((*hv_WindowCenteredRotationOut) == 1))) {
                get_trackball_center_fixed(hv_SelectedObjectIn, hv_TrackballCenterRow, hv_TrackballCenterCol,
                                           hv_TrackballRadiusPixel, hv_Scene3D, hv_ObjectModel3DID, hv_PosesIn,
                                           hv_WindowHandleBuffer, hv_CamParam, hv_GenParamName, hv_GenParamValue,
                                           &hv_TBCenter, &hv_TBSize);
            } else {
                get_trackball_center(hv_SelectedObjectIn, hv_TrackballRadiusPixel, hv_ObjectModel3DID,
                                     hv_PosesIn, &hv_TBCenter, &hv_TBSize);
            }
        }
        if (0 != (HTuple(int(((*hv_SelectedObjectOut).TupleMin()) == 0)).TupleAnd(
                int(((*hv_SelectedObjectOut).TupleMax()) == 1)))) {
            //At this point, multiple objects do not necessary have the same
            //pose any more. Consequently, we have to return a tuple of poses
            //as output of visualize_object_model_3d
            ExpTmpLocalVar_gIsSinglePose = 0;
            ExpSetGlobalVar_gIsSinglePose(ExpTmpLocalVar_gIsSinglePose);
        }
        CountChannels(ho_BackgroundImage, &hv_NumChannels);
        hv_ColorImage = int(hv_NumChannels == 3);
        //Alt (32) => lower sensitivity
        TupleRsh(hv_Button, 5, &hv_BAnd);
        if (0 != (hv_BAnd % 2)) {
            hv_SensFactor = 0.1;
        } else {
            hv_SensFactor = 1.0;
        }
        hv_IsButtonTrans = HTuple(int(HTuple(hv_MouseMapping[0]) == hv_Button)).TupleOr(
                int((32 + HTuple(hv_MouseMapping[0])) == hv_Button));
        hv_IsButtonRot = HTuple(int(HTuple(hv_MouseMapping[1]) == hv_Button)).TupleOr(
                int((32 + HTuple(hv_MouseMapping[1])) == hv_Button));
        hv_IsButtonDist = HTuple(HTuple(HTuple(HTuple(HTuple(int(HTuple(hv_MouseMapping[2]) == hv_Button)).TupleOr(
                int((32 + HTuple(hv_MouseMapping[2])) == hv_Button))).TupleOr(
                int(HTuple(hv_MouseMapping[3]) == hv_Button))).TupleOr(
                int((32 + HTuple(hv_MouseMapping[3])) == hv_Button))).TupleOr(
                int(HTuple(hv_MouseMapping[4]) == hv_Button))).TupleOr(
                int((32 + HTuple(hv_MouseMapping[4])) == hv_Button));
        if (0 != hv_IsButtonTrans) {
            //Translate in XY-direction
            hv_MRow1 = hv_Row;
            hv_MCol1 = hv_Column;
            while (0 != hv_IsButtonTrans) {
                try {
                    GetMpositionSubPix(hv_WindowHandle, &hv_Row, &hv_Column, &hv_ButtonLoop);
                    hv_IsButtonTrans = int(hv_ButtonLoop == hv_Button);
                    hv_MRow2 = hv_MRow1 + ((hv_Row - hv_MRow1) * hv_SensFactor);
                    hv_MCol2 = hv_MCol1 + ((hv_Column - hv_MCol1) * hv_SensFactor);
                    GetLineOfSight(hv_MRow1, hv_MCol1, hv_CamParam, &hv_PX, &hv_PY, &hv_PZ,
                                   &hv_QX1, &hv_QY1, &hv_QZ1);
                    GetLineOfSight(hv_MRow2, hv_MCol2, hv_CamParam, &hv_PX, &hv_PY, &hv_PZ,
                                   &hv_QX2, &hv_QY2, &hv_QZ2);
                    hv_Len = (((hv_QX1 * hv_QX1) + (hv_QY1 * hv_QY1)) + (hv_QZ1 * hv_QZ1)).TupleSqrt();
                    hv_Dist = (((HTuple(hv_TBCenter[0]) * HTuple(hv_TBCenter[0])) +
                                (HTuple(hv_TBCenter[1]) * HTuple(hv_TBCenter[1]))) +
                               (HTuple(hv_TBCenter[2]) * HTuple(hv_TBCenter[2]))).TupleSqrt();
                    hv_Translate = ((((hv_QX2 - hv_QX1).TupleConcat(hv_QY2 - hv_QY1)).TupleConcat(hv_QZ2 - hv_QZ1)) *
                                    hv_Dist) / hv_Len;
                    (*hv_PosesOut) = HTuple();
                    if (0 != (int(hv_NumModels <= hv_MaxNumModels))) {
                        {
                            HTuple end_val110 = hv_NumModels - 1;
                            HTuple step_val110 = 1;
                            for (hv_Index = 0; hv_Index.Continue(end_val110, step_val110); hv_Index += step_val110) {
                                QCoreApplication::processEvents();
                                hv_PoseIn = hv_PosesIn.TupleSelectRange(hv_Index * 7, (hv_Index * 7) + 6);
                                if (0 != (HTuple((*hv_SelectedObjectOut)[hv_Index]))) {
                                    PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
                                    HomMat3dTranslate(hv_HomMat3DIn, HTuple(hv_Translate[0]), HTuple(hv_Translate[1]),
                                                      HTuple(hv_Translate[2]), &hv_HomMat3DOut);
                                    HomMat3dToPose(hv_HomMat3DOut, &hv_PoseOut);
                                    SetScene3dInstancePose(hv_Scene3D, hv_Index, hv_PoseOut);
                                } else {
                                    hv_PoseOut = hv_PoseIn;
                                }
                                (*hv_PosesOut) = (*hv_PosesOut).TupleConcat(hv_PoseOut);
                            }
                        }
                    } else {
                        TupleFind((*hv_SelectedObjectOut), 1, &hv_Indices);
                        hv_PoseIn = hv_PosesIn.TupleSelectRange(HTuple(hv_Indices[0]) * 7,
                                                                (HTuple(hv_Indices[0]) * 7) + 6);
                        PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
                        HomMat3dTranslate(hv_HomMat3DIn, HTuple(hv_Translate[0]), HTuple(hv_Translate[1]),
                                          HTuple(hv_Translate[2]), &hv_HomMat3DOut);
                        HomMat3dToPose(hv_HomMat3DOut, &hv_PoseOut);
                        hv_Sequence = HTuple::TupleGenSequence(0, (hv_NumModels * 7) - 1, 1);
                        TupleMod(hv_Sequence, 7, &hv_Mod);
                        hv_SequenceReal = HTuple::TupleGenSequence(0, hv_NumModels - (1.0 / 7.0), 1.0 / 7.0);
                        hv_Sequence2Int = hv_SequenceReal.TupleInt();
                        TupleSelect((*hv_SelectedObjectOut), hv_Sequence2Int, &hv_Selected);
                        hv_InvSelected = 1 - hv_Selected;
                        TupleSelect(hv_PoseOut, hv_Mod, &(*hv_PosesOut));
                        (*hv_PosesOut) = ((*hv_PosesOut) * hv_Selected) + (hv_PosesIn * hv_InvSelected);
                        SetScene3dInstancePose(hv_Scene3D, HTuple::TupleGenSequence(0, hv_NumModels - 1, 1),
                                               (*hv_PosesOut));
                    }
                    dump_image_output(ho_BackgroundImage, hv_WindowHandleBuffer, hv_Scene3D,
                                      hv_AlphaOrig, hv_ObjectModel3DID, hv_GenParamName, hv_GenParamValue,
                                      hv_CamParam, (*hv_PosesOut), hv_ColorImage, hv_Title, hv_Information,
                                      hv_Labels, hv_VisualizeTB, "true", hv_TrackballCenterRow, hv_TrackballCenterCol,
                                      hv_TBSize, (*hv_SelectedObjectOut), int((*hv_WindowCenteredRotationOut) == 1),
                                      hv_TBCenter);
                    DumpWindowImage(&ho_ImageDump, hv_WindowHandleBuffer);
                    HDevWindowStack::SetActive(hv_WindowHandle);
                    if (HDevWindowStack::IsOpen())
                        DispObj(ho_ImageDump, HDevWindowStack::GetActive());
                    //
                    hv_MRow1 = hv_Row;
                    hv_MCol1 = hv_Column;
                    hv_PosesIn = (*hv_PosesOut);
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    //Keep waiting
                }
            }
        } else if (0 != hv_IsButtonDist) {
            //Change the Z distance
            hv_MRow1 = hv_Row;
            while (0 != hv_IsButtonDist) {
                QCoreApplication::processEvents();
                try {
                    GetMpositionSubPix(hv_WindowHandle, &hv_Row, &hv_Column, &hv_ButtonLoop);
                    hv_IsButtonDist = int(hv_ButtonLoop == hv_Button);
                    hv_MRow2 = hv_Row;
                    hv_DRow = hv_MRow2 - hv_MRow1;
                    hv_Dist = (((HTuple(hv_TBCenter[0]) * HTuple(hv_TBCenter[0])) +
                                (HTuple(hv_TBCenter[1]) * HTuple(hv_TBCenter[1]))) +
                               (HTuple(hv_TBCenter[2]) * HTuple(hv_TBCenter[2]))).TupleSqrt();
                    hv_TranslateZ = (((-hv_Dist) * hv_DRow) * 0.003) * hv_SensFactor;
                    hv_TBCenter[2] = HTuple(hv_TBCenter[2]) + hv_TranslateZ;
                    (*hv_PosesOut) = HTuple();
                    if (0 != (int(hv_NumModels <= hv_MaxNumModels))) {
                        {
                            HTuple end_val164 = hv_NumModels - 1;
                            HTuple step_val164 = 1;
                            for (hv_Index = 0; hv_Index.Continue(end_val164, step_val164); hv_Index += step_val164) {
                                QCoreApplication::processEvents();
                                hv_PoseIn = hv_PosesIn.TupleSelectRange(hv_Index * 7, (hv_Index * 7) + 6);
                                if (0 != (HTuple((*hv_SelectedObjectOut)[hv_Index]))) {
                                    //Transform the whole scene or selected object only
                                    PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
                                    HomMat3dTranslate(hv_HomMat3DIn, 0, 0, hv_TranslateZ, &hv_HomMat3DOut);
                                    HomMat3dToPose(hv_HomMat3DOut, &hv_PoseOut);
                                    SetScene3dInstancePose(hv_Scene3D, hv_Index, hv_PoseOut);
                                } else {
                                    hv_PoseOut = hv_PoseIn;
                                }
                                (*hv_PosesOut) = (*hv_PosesOut).TupleConcat(hv_PoseOut);
                            }
                        }
                    } else {
                        TupleFind((*hv_SelectedObjectOut), 1, &hv_Indices);
                        hv_PoseIn = hv_PosesIn.TupleSelectRange(HTuple(hv_Indices[0]) * 7,
                                                                (HTuple(hv_Indices[0]) * 7) + 6);
                        PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
                        HomMat3dTranslate(hv_HomMat3DIn, 0, 0, hv_TranslateZ, &hv_HomMat3DOut);
                        HomMat3dToPose(hv_HomMat3DOut, &hv_PoseOut);
                        hv_Sequence = HTuple::TupleGenSequence(0, (hv_NumModels * 7) - 1, 1);
                        TupleMod(hv_Sequence, 7, &hv_Mod);
                        hv_SequenceReal = HTuple::TupleGenSequence(0, hv_NumModels - (1.0 / 7.0), 1.0 / 7.0);
                        hv_Sequence2Int = hv_SequenceReal.TupleInt();
                        TupleSelect((*hv_SelectedObjectOut), hv_Sequence2Int, &hv_Selected);
                        hv_InvSelected = 1 - hv_Selected;
                        TupleSelect(hv_PoseOut, hv_Mod, &(*hv_PosesOut));
                        (*hv_PosesOut) = ((*hv_PosesOut) * hv_Selected) + (hv_PosesIn * hv_InvSelected);
                        SetScene3dInstancePose(hv_Scene3D, HTuple::TupleGenSequence(0, hv_NumModels - 1, 1),
                                               (*hv_PosesOut));
                    }
                    dump_image_output(ho_BackgroundImage, hv_WindowHandleBuffer, hv_Scene3D,
                                      hv_AlphaOrig, hv_ObjectModel3DID, hv_GenParamName, hv_GenParamValue,
                                      hv_CamParam, (*hv_PosesOut), hv_ColorImage, hv_Title, hv_Information,
                                      hv_Labels, hv_VisualizeTB, "true", hv_TrackballCenterRow, hv_TrackballCenterCol,
                                      hv_TBSize, (*hv_SelectedObjectOut), (*hv_WindowCenteredRotationOut),
                                      hv_TBCenter);
                    DumpWindowImage(&ho_ImageDump, hv_WindowHandleBuffer);
                    HDevWindowStack::SetActive(hv_WindowHandle);
                    if (HDevWindowStack::IsOpen())
                        DispObj(ho_ImageDump, HDevWindowStack::GetActive());
                    //
                    hv_MRow1 = hv_Row;
                    hv_PosesIn = (*hv_PosesOut);
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    //Keep waiting
                }
            }
        } else if (0 != hv_IsButtonRot) {
            //Rotate the object
            hv_MRow1 = hv_Row;
            hv_MCol1 = hv_Column;
            while (0 != hv_IsButtonRot) {
                QCoreApplication::processEvents();
                try {
                    GetMpositionSubPix(hv_WindowHandle, &hv_Row, &hv_Column, &hv_ButtonLoop);
                    hv_IsButtonRot = int(hv_ButtonLoop == hv_Button);
                    hv_MRow2 = hv_Row;
                    hv_MCol2 = hv_Column;
                    //Transform the pixel coordinates to relative image coordinates
                    hv_MX1 = (hv_TrackballCenterCol - hv_MCol1) / (0.5 * hv_MinImageSize);
                    hv_MY1 = (hv_TrackballCenterRow - hv_MRow1) / (0.5 * hv_MinImageSize);
                    hv_MX2 = (hv_TrackballCenterCol - hv_MCol2) / (0.5 * hv_MinImageSize);
                    hv_MY2 = (hv_TrackballCenterRow - hv_MRow2) / (0.5 * hv_MinImageSize);
                    //Compute the quaternion rotation that corresponds to the mouse
                    //movement
                    trackball(hv_MX1, hv_MY1, hv_MX2, hv_MY2, hv_VirtualTrackball, hv_TrackballSize,
                              hv_SensFactor, &hv_RelQuaternion);
                    //Transform the quaternion to a rotation matrix
                    QuatToHomMat3d(hv_RelQuaternion, &hv_HomMat3DRotRel);
                    (*hv_PosesOut) = HTuple();
                    if (0 != (int(hv_NumModels <= hv_MaxNumModels))) {
                        {
                            HTuple end_val226 = hv_NumModels - 1;
                            HTuple step_val226 = 1;
                            for (hv_Index = 0; hv_Index.Continue(end_val226, step_val226); hv_Index += step_val226) {
                                QCoreApplication::processEvents();
                                hv_PoseIn = hv_PosesIn.TupleSelectRange(hv_Index * 7, (hv_Index * 7) + 6);
                                if (0 != (HTuple((*hv_SelectedObjectOut)[hv_Index]))) {
                                    //Transform the whole scene or selected object only
                                    PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
                                    HomMat3dTranslate(hv_HomMat3DIn, -HTuple(hv_TBCenter[0]), -HTuple(hv_TBCenter[1]),
                                                      -HTuple(hv_TBCenter[2]), &hv_HomMat3DIn);
                                    HomMat3dCompose(hv_HomMat3DRotRel, hv_HomMat3DIn, &hv_HomMat3DIn);
                                    HomMat3dTranslate(hv_HomMat3DIn, HTuple(hv_TBCenter[0]), HTuple(hv_TBCenter[1]),
                                                      HTuple(hv_TBCenter[2]), &hv_HomMat3DOut);
                                    HomMat3dToPose(hv_HomMat3DOut, &hv_PoseOut);
                                    SetScene3dInstancePose(hv_Scene3D, hv_Index, hv_PoseOut);
                                } else {
                                    hv_PoseOut = hv_PoseIn;
                                }
                                (*hv_PosesOut) = (*hv_PosesOut).TupleConcat(hv_PoseOut);
                            }
                        }
                    } else {
                        TupleFind((*hv_SelectedObjectOut), 1, &hv_Indices);
                        hv_PoseIn = hv_PosesIn.TupleSelectRange(HTuple(hv_Indices[0]) * 7,
                                                                (HTuple(hv_Indices[0]) * 7) + 6);
                        PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
                        HomMat3dTranslate(hv_HomMat3DIn, -HTuple(hv_TBCenter[0]), -HTuple(hv_TBCenter[1]),
                                          -HTuple(hv_TBCenter[2]), &hv_HomMat3DInTmp1);
                        HomMat3dCompose(hv_HomMat3DRotRel, hv_HomMat3DInTmp1, &hv_HomMat3DInTmp);
                        HomMat3dTranslate(hv_HomMat3DInTmp, HTuple(hv_TBCenter[0]), HTuple(hv_TBCenter[1]),
                                          HTuple(hv_TBCenter[2]), &hv_HomMat3DOut);
                        HomMat3dToPose(hv_HomMat3DOut, &hv_PoseOut);
                        hv_Sequence = HTuple::TupleGenSequence(0, (hv_NumModels * 7) - 1, 1);
                        TupleMod(hv_Sequence, 7, &hv_Mod);
                        hv_SequenceReal = HTuple::TupleGenSequence(0, hv_NumModels - (1.0 / 7.0), 1.0 / 7.0);
                        hv_Sequence2Int = hv_SequenceReal.TupleInt();
                        TupleSelect((*hv_SelectedObjectOut), hv_Sequence2Int, &hv_Selected);
                        hv_InvSelected = 1 - hv_Selected;
                        TupleSelect(hv_PoseOut, hv_Mod, &(*hv_PosesOut));
                        hv_PosesOut2 = ((*hv_PosesOut) * hv_Selected) + (hv_PosesIn * hv_InvSelected);
                        (*hv_PosesOut) = hv_PosesOut2;
                        SetScene3dInstancePose(hv_Scene3D, HTuple::TupleGenSequence(0, hv_NumModels - 1, 1),
                                               (*hv_PosesOut));
                    }
                    dump_image_output(ho_BackgroundImage, hv_WindowHandleBuffer, hv_Scene3D,
                                      hv_AlphaOrig, hv_ObjectModel3DID, hv_GenParamName, hv_GenParamValue,
                                      hv_CamParam, (*hv_PosesOut), hv_ColorImage, hv_Title, hv_Information,
                                      hv_Labels, hv_VisualizeTB, "true", hv_TrackballCenterRow, hv_TrackballCenterCol,
                                      hv_TBSize, (*hv_SelectedObjectOut), (*hv_WindowCenteredRotationOut),
                                      hv_TBCenter);
                    DumpWindowImage(&ho_ImageDump, hv_WindowHandleBuffer);
                    HDevWindowStack::SetActive(hv_WindowHandle);
                    if (HDevWindowStack::IsOpen())
                        DispObj(ho_ImageDump, HDevWindowStack::GetActive());
                    //
                    hv_MRow1 = hv_Row;
                    hv_MCol1 = hv_Column;
                    hv_PosesIn = (*hv_PosesOut);
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    //Keep waiting
                }
            }
        }
        (*hv_PosesOut) = hv_PosesIn;
    }
    return;
}

// Chapter: Graphics / Parameters
void color_string_to_rgb(HTuple hv_Color, HTuple *hv_RGB) {

    // Local iconic variables
    HObject ho_Rectangle, ho_Image;

    // Local control variables
    HTuple hv_WindowHandleBuffer, hv_Exception;

    OpenWindow(0, 0, 1, 1, 0, "buffer", "", &hv_WindowHandleBuffer);
    SetPart(hv_WindowHandleBuffer, 0, 0, -1, -1);
    GenRectangle1(&ho_Rectangle, 0, 0, 0, 0);
    try {
        SetColor(hv_WindowHandleBuffer, hv_Color);
    }
        // catch (Exception)
    catch (HException &HDevExpDefaultException) {
        HDevExpDefaultException.ToHTuple(&hv_Exception);
        hv_Exception = "Wrong value of control parameter Color (must be a valid color string)";
        throw HException(hv_Exception);
    }
    DispObj(ho_Rectangle, hv_WindowHandleBuffer);
    DumpWindowImage(&ho_Image, hv_WindowHandleBuffer);
    CloseWindow(hv_WindowHandleBuffer);
    GetGrayval(ho_Image, 0, 0, &(*hv_RGB));
    (*hv_RGB) += ((HTuple(0).Append(0)).Append(0));
    return;
}

// Chapter: Graphics / Output
// Short Description: Determine the optimum distance of the object to obtain a reasonable visualization
void determine_optimum_pose_distance(HTuple hv_ObjectModel3DID, HTuple hv_CamParam,
                                     HTuple hv_ImageCoverage, HTuple hv_PoseIn, HTuple *hv_PoseOut) {

    // Local iconic variables

    // Local control variables
    HTuple hv_Rows, hv_Cols, hv_MinMinZ, hv_BB, hv_Index;
    HTuple hv_CurrBB, hv_Exception, hv_Seq, hv_DXMax, hv_DYMax;
    HTuple hv_DZMax, hv_Diameter, hv_ZAdd, hv_BBX0, hv_BBX1;
    HTuple hv_BBY0, hv_BBY1, hv_BBZ0, hv_BBZ1, hv_X, hv_Y;
    HTuple hv_Z, hv_HomMat3DIn, hv_QX_In, hv_QY_In, hv_QZ_In;
    HTuple hv_PoseInter, hv_HomMat3D, hv_QX, hv_QY, hv_QZ;
    HTuple hv_Cx, hv_Cy, hv_DR, hv_DC, hv_MaxDist, hv_HomMat3DRotate;
    HTuple hv_ImageWidth, hv_ImageHeight, hv_MinImageSize;
    HTuple hv_Zs, hv_ZDiff, hv_ScaleZ, hv_ZNew;

    //Determine the optimum distance of the object to obtain
    //a reasonable visualization
    //
    hv_Rows = HTuple();
    hv_Cols = HTuple();
    hv_MinMinZ = 1e30;
    hv_BB = HTuple();
    {
        HTuple end_val7 = (hv_ObjectModel3DID.TupleLength()) - 1;
        HTuple step_val7 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val7, step_val7); hv_Index += step_val7) {
            QCoreApplication::processEvents();
            try {
                GetObjectModel3dParams(HTuple(hv_ObjectModel3DID[hv_Index]), "bounding_box1",
                                       &hv_CurrBB);
                hv_BB = hv_BB.TupleConcat(hv_CurrBB);
            }
                // catch (Exception)
            catch (HException &HDevExpDefaultException) {
                HDevExpDefaultException.ToHTuple(&hv_Exception);
                //3D object model is empty / has no bounding box -> ignore it
            }
        }
    }
    if (0 != (int((((hv_BB.TupleAbs()).TupleConcat(0)).TupleSum()) == 0.0))) {
        hv_BB.Clear();
        hv_BB.Append(-(HTuple(HTuple::TupleRand(3) * 1e-20).TupleAbs()));
        hv_BB.Append(HTuple(HTuple::TupleRand(3) * 1e-20).TupleAbs());
    }
    //Calculate diameter over all objects to be visualized
    hv_Seq = HTuple::TupleGenSequence(0, (hv_BB.TupleLength()) - 1, 6);
    hv_DXMax = (HTuple(hv_BB[hv_Seq + 3]).TupleMax()) - (HTuple(hv_BB[hv_Seq]).TupleMin());
    hv_DYMax = (HTuple(hv_BB[hv_Seq + 4]).TupleMax()) - (HTuple(hv_BB[hv_Seq + 1]).TupleMin());
    hv_DZMax = (HTuple(hv_BB[hv_Seq + 5]).TupleMax()) - (HTuple(hv_BB[hv_Seq + 2]).TupleMin());
    hv_Diameter = (((hv_DXMax * hv_DXMax) + (hv_DYMax * hv_DYMax)) + (hv_DZMax * hv_DZMax)).TupleSqrt();
    //Allow the visualization of single points or extremely small objects
    hv_ZAdd = 0.0;
    if (0 != (int((hv_Diameter.TupleMax()) < 1e-10))) {
        hv_ZAdd = 0.01;
    }
    //Set extremely small diameters to 1e-10 to avoid CZ == 0.0, which would lead
    //to projection errors
    if (0 != (int((hv_Diameter.TupleMin()) < 1e-10))) {
        hv_Diameter = hv_Diameter - (((((hv_Diameter - 1e-10).TupleSgn()) - 1).TupleSgn()) * 1e-10);
    }
    //Move all points infront of the camera
    hv_BBX0 = HTuple(hv_BB[hv_Seq + 0]);
    hv_BBX1 = HTuple(hv_BB[hv_Seq + 3]);
    hv_BBY0 = HTuple(hv_BB[hv_Seq + 1]);
    hv_BBY1 = HTuple(hv_BB[hv_Seq + 4]);
    hv_BBZ0 = HTuple(hv_BB[hv_Seq + 2]);
    hv_BBZ1 = HTuple(hv_BB[hv_Seq + 5]);
    hv_X.Clear();
    hv_X.Append(hv_BBX0);
    hv_X.Append(hv_BBX0);
    hv_X.Append(hv_BBX0);
    hv_X.Append(hv_BBX0);
    hv_X.Append(hv_BBX1);
    hv_X.Append(hv_BBX1);
    hv_X.Append(hv_BBX1);
    hv_X.Append(hv_BBX1);
    hv_Y.Clear();
    hv_Y.Append(hv_BBY0);
    hv_Y.Append(hv_BBY0);
    hv_Y.Append(hv_BBY1);
    hv_Y.Append(hv_BBY1);
    hv_Y.Append(hv_BBY0);
    hv_Y.Append(hv_BBY0);
    hv_Y.Append(hv_BBY1);
    hv_Y.Append(hv_BBY1);
    hv_Z.Clear();
    hv_Z.Append(hv_BBZ0);
    hv_Z.Append(hv_BBZ1);
    hv_Z.Append(hv_BBZ0);
    hv_Z.Append(hv_BBZ1);
    hv_Z.Append(hv_BBZ0);
    hv_Z.Append(hv_BBZ1);
    hv_Z.Append(hv_BBZ0);
    hv_Z.Append(hv_BBZ1);
    PoseToHomMat3d(hv_PoseIn, &hv_HomMat3DIn);
    AffineTransPoint3d(hv_HomMat3DIn, hv_X, hv_Y, hv_Z, &hv_QX_In, &hv_QY_In, &hv_QZ_In);
    PoseCompose(
            ((HTuple(0).Append(0)).TupleConcat((-(hv_QZ_In.TupleMin())) + (2 * (hv_Diameter.TupleMax())))).TupleConcat(
                    (((HTuple(0).Append(0)).Append(0)).Append(0))),
            hv_PoseIn, &hv_PoseInter);
    PoseToHomMat3d(hv_PoseInter, &hv_HomMat3D);
    //Determine the maximum extension of the projection
    AffineTransPoint3d(hv_HomMat3D, hv_X, hv_Y, hv_Z, &hv_QX, &hv_QY, &hv_QZ);
    Project3dPoint(hv_QX, hv_QY, hv_QZ, hv_CamParam, &hv_Rows, &hv_Cols);
    hv_MinMinZ = hv_QZ.TupleMin();
    get_cam_par_data(hv_CamParam, "cx", &hv_Cx);
    get_cam_par_data(hv_CamParam, "cy", &hv_Cy);
    hv_DR = hv_Rows - hv_Cy;
    hv_DC = hv_Cols - hv_Cx;
    hv_DR = (hv_DR.TupleMax()) - (hv_DR.TupleMin());
    hv_DC = (hv_DC.TupleMax()) - (hv_DC.TupleMin());
    hv_MaxDist = ((hv_DR * hv_DR) + (hv_DC * hv_DC)).TupleSqrt();
    //
    if (0 != (int(hv_MaxDist < 1e-10))) {
        //If the object has no extension in the above projection (looking along
        //a line), we determine the extension of the object in a rotated view
        HomMat3dRotateLocal(hv_HomMat3D, HTuple(90).TupleRad(), "x", &hv_HomMat3DRotate);
        AffineTransPoint3d(hv_HomMat3DRotate, hv_X, hv_Y, hv_Z, &hv_QX, &hv_QY, &hv_QZ);
        Project3dPoint(hv_QX, hv_QY, hv_QZ, hv_CamParam, &hv_Rows, &hv_Cols);
        hv_DR = hv_Rows - hv_Cy;
        hv_DC = hv_Cols - hv_Cx;
        hv_DR = (hv_DR.TupleMax()) - (hv_DR.TupleMin());
        hv_DC = (hv_DC.TupleMax()) - (hv_DC.TupleMin());
        hv_MaxDist = (hv_MaxDist.TupleConcat(((hv_DR * hv_DR) + (hv_DC * hv_DC)).TupleSqrt())).TupleMax();
    }
    //
    get_cam_par_data(hv_CamParam, "image_width", &hv_ImageWidth);
    get_cam_par_data(hv_CamParam, "image_height", &hv_ImageHeight);
    hv_MinImageSize = (hv_ImageWidth.TupleConcat(hv_ImageHeight)).TupleMin();
    //
    hv_Z = ((const HTuple &) hv_PoseInter)[2];
    hv_Zs = hv_MinMinZ;
    hv_ZDiff = hv_Z - hv_Zs;
    hv_ScaleZ = hv_MaxDist / (((0.5 * hv_MinImageSize) * hv_ImageCoverage) * 2.0);
    hv_ZNew = ((hv_ScaleZ * hv_Zs) + hv_ZDiff) + hv_ZAdd;
    (*hv_PoseOut) = hv_PoseInter.TupleReplace(2, hv_ZNew);
    //
    return;
}

// Chapter: Develop
// Short Description: Switch dev_update_pc, dev_update_var and dev_update_window to 'off'.
void dev_update_off() {

    //This procedure sets different update settings to 'off'.
    //This is useful to get the best performance and reduce overhead.
    //
    // dev_update_pc(...); only in hdevelop
    // dev_update_var(...); only in hdevelop
    // dev_update_window(...); only in hdevelop
    return;
}

// Chapter: Graphics / Output
// Short Description: Displays a continue button.
void disp_continue_button(HTuple hv_WindowHandle) {

    // Local iconic variables

    // Local control variables
    HTuple hv_ContinueMessage, hv_Exception, hv_Row;
    HTuple hv_Column, hv_Width, hv_Height, hv_Ascent, hv_Descent;
    HTuple hv_TextWidth, hv_TextHeight;

    //This procedure displays a 'Continue' text button
    //in the lower right corner of the screen.
    //It uses the procedure disp_message.
    //
    //Input parameters:
    //WindowHandle: The window, where the text shall be displayed
    //
    //Use the continue message set in the global variable gTerminationButtonLabel.
    //If this variable is not defined, set a standard text instead.
    //global tuple gTerminationButtonLabel
    try {
        hv_ContinueMessage = ExpGetGlobalVar_gTerminationButtonLabel();
    }
        // catch (Exception)
    catch (HException &HDevExpDefaultException) {
        HDevExpDefaultException.ToHTuple(&hv_Exception);
        hv_ContinueMessage = "Continue";
    }
    //Display the continue button
    GetWindowExtents(hv_WindowHandle, &hv_Row, &hv_Column, &hv_Width, &hv_Height);
    GetStringExtents(hv_WindowHandle, (" " + hv_ContinueMessage) + " ", &hv_Ascent, &hv_Descent,
                     &hv_TextWidth, &hv_TextHeight);
    disp_text_button(hv_WindowHandle, hv_ContinueMessage, "window", (hv_Height - hv_TextHeight) - 22,
                     (hv_Width - hv_TextWidth) - 12, "black", "#f28f26");
    return;
}

// Chapter: Graphics / Text
// Short Description: This procedure writes a text message.
void disp_message(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem,
                  HTuple hv_Row, HTuple hv_Column, HTuple hv_Color, HTuple hv_Box) {

    // Local iconic variables

    // Local control variables
    HTuple hv_GenParamName, hv_GenParamValue;

    //This procedure displays text in a graphics window.
    //
    //Input parameters:
    //WindowHandle: The WindowHandle of the graphics window, where
    //   the message should be displayed
    //String: A tuple of strings containing the text message to be displayed
    //CoordSystem: If set to 'window', the text position is given
    //   with respect to the window coordinate system.
    //   If set to 'image', image coordinates are used.
    //   (This may be useful in zoomed images.)
    //Row: The row coordinate of the desired text position
    //   A tuple of values is allowed to display text at different
    //   positions.
    //Column: The column coordinate of the desired text position
    //   A tuple of values is allowed to display text at different
    //   positions.
    //Color: defines the color of the text as string.
    //   If set to [], '' or 'auto' the currently set color is used.
    //   If a tuple of strings is passed, the colors are used cyclically...
    //   - if |Row| == |Column| == 1: for each new textline
    //   = else for each text position.
    //Box: If Box[0] is set to 'true', the text is written within an orange box.
    //     If set to' false', no box is displayed.
    //     If set to a color string (e.g. 'white', '#FF00CC', etc.),
    //       the text is written in a box of that color.
    //     An optional second value for Box (Box[1]) controls if a shadow is displayed:
    //       'true' -> display a shadow in a default color
    //       'false' -> display no shadow
    //       otherwise -> use given string as color string for the shadow color
    //
    //It is possible to display multiple text strings in a single call.
    //In this case, some restrictions apply:
    //- Multiple text positions can be defined by specifying a tuple
    //  with multiple Row and/or Column coordinates, i.e.:
    //  - |Row| == n, |Column| == n
    //  - |Row| == n, |Column| == 1
    //  - |Row| == 1, |Column| == n
    //- If |Row| == |Column| == 1,
    //  each element of String is display in a new textline.
    //- If multiple positions or specified, the number of Strings
    //  must match the number of positions, i.e.:
    //  - Either |String| == n (each string is displayed at the
    //                          corresponding position),
    //  - or     |String| == 1 (The string is displayed n times).
    //
    //
    //Convert the parameters for disp_text.
    if (0 != (HTuple(int(hv_Row == HTuple())).TupleOr(int(hv_Column == HTuple())))) {
        return;
    }
    if (0 != (int(hv_Row == -1))) {
        hv_Row = 12;
    }
    if (0 != (int(hv_Column == -1))) {
        hv_Column = 12;
    }
    //
    //Convert the parameter Box to generic parameters.
    hv_GenParamName = HTuple();
    hv_GenParamValue = HTuple();
    if (0 != (int((hv_Box.TupleLength()) > 0))) {
        if (0 != (int(HTuple(hv_Box[0]) == HTuple("false")))) {
            //Display no box
            hv_GenParamName = hv_GenParamName.TupleConcat("box");
            hv_GenParamValue = hv_GenParamValue.TupleConcat("false");
        } else if (0 != (int(HTuple(hv_Box[0]) != HTuple("true")))) {
            //Set a color other than the default.
            hv_GenParamName = hv_GenParamName.TupleConcat("box_color");
            hv_GenParamValue = hv_GenParamValue.TupleConcat(HTuple(hv_Box[0]));
        }
    }
    if (0 != (int((hv_Box.TupleLength()) > 1))) {
        if (0 != (int(HTuple(hv_Box[1]) == HTuple("false")))) {
            //Display no shadow.
            hv_GenParamName = hv_GenParamName.TupleConcat("shadow");
            hv_GenParamValue = hv_GenParamValue.TupleConcat("false");
        } else if (0 != (int(HTuple(hv_Box[1]) != HTuple("true")))) {
            //Set a shadow color other than the default.
            hv_GenParamName = hv_GenParamName.TupleConcat("shadow_color");
            hv_GenParamValue = hv_GenParamValue.TupleConcat(HTuple(hv_Box[1]));
        }
    }
    //Restore default CoordSystem behavior.
    if (0 != (int(hv_CoordSystem != HTuple("window")))) {
        hv_CoordSystem = "image";
    }
    //
    if (0 != (int(hv_Color == HTuple("")))) {
        //disp_text does not accept an empty string for Color.
        hv_Color = HTuple();
    }
    //
    DispText(hv_WindowHandle, hv_String, hv_CoordSystem, hv_Row, hv_Column, hv_Color,
             hv_GenParamName, hv_GenParamValue);
    return;
}

// Chapter: Graphics / Output
// Short Description: Can replace disp_object_model_3d if there is no OpenGL available.
void disp_object_model_no_opengl(HObject *ho_ModelContours, HTuple hv_ObjectModel3DID,
                                 HTuple hv_GenParamName, HTuple hv_GenParamValue, HTuple hv_WindowHandleBuffer,
                                 HTuple hv_CamParam, HTuple hv_PosesOut) {

    // Local iconic variables

    // Local control variables
    HTuple hv_Idx, hv_CustomParamName, hv_CustomParamValue;
    HTuple hv_Font, hv_IndicesDispBackGround, hv_Indices, hv_ImageWidth;
    HTuple hv_HasPolygons, hv_HasTri, hv_HasPoints, hv_HasLines;
    HTuple hv_NumPoints, hv_IsPrimitive, hv_Center, hv_Diameter;
    HTuple hv_OpenGlHiddenSurface, hv_CenterX, hv_CenterY;
    HTuple hv_CenterZ, hv_PosObjectsZ, hv_I, hv_Pose, hv_HomMat3DObj;
    HTuple hv_PosObjCenterX, hv_PosObjCenterY, hv_PosObjCenterZ;
    HTuple hv_PosObjectsX, hv_PosObjectsY, hv_Color, hv_Indices1;
    HTuple hv_Indices2, hv_J, hv_Indices3, hv_HomMat3D, hv_SampledObjectModel3D;
    HTuple hv_X, hv_Y, hv_Z, hv_HomMat3D1, hv_Qx, hv_Qy, hv_Qz;
    HTuple hv_Row, hv_Column, hv_ObjectModel3DConvexHull, hv_Exception;

    //This procedure allows to use project_object_model_3d to simulate a disp_object_model_3d
    //call for small objects. Large objects are sampled down to display.
    hv_Idx = hv_GenParamName.TupleFind("point_size");
    if (0 != (HTuple(hv_Idx.TupleLength()).TupleAnd(int(hv_Idx != -1)))) {
        hv_CustomParamName = "point_size";
        hv_CustomParamValue = HTuple(hv_GenParamValue[hv_Idx]);
        if (0 != (int(hv_CustomParamValue == 1))) {
            hv_CustomParamValue = 0;
        }
    } else {
        hv_CustomParamName = HTuple();
        hv_CustomParamValue = HTuple();
    }
    GetFont(hv_WindowHandleBuffer, &hv_Font);
    TupleFind(hv_GenParamName, "disp_background", &hv_IndicesDispBackGround);
    if (0 != (int(hv_IndicesDispBackGround != -1))) {
        TupleFind(HTuple(hv_GenParamName[hv_IndicesDispBackGround]), "false", &hv_Indices);
        if (0 != (int(hv_Indices != -1))) {
            ClearWindow(hv_WindowHandleBuffer);
        }
    }
    set_display_font(hv_WindowHandleBuffer, 11, "mono", "false", "false");
    get_cam_par_data(hv_CamParam, "image_width", &hv_ImageWidth);
    disp_message(hv_WindowHandleBuffer, "OpenGL missing!", "image", 5, hv_ImageWidth - 130,
                 "red", "false");
    SetFont(hv_WindowHandleBuffer, hv_Font);
    GetObjectModel3dParams(hv_ObjectModel3DID, "has_polygons", &hv_HasPolygons);
    GetObjectModel3dParams(hv_ObjectModel3DID, "has_triangles", &hv_HasTri);
    GetObjectModel3dParams(hv_ObjectModel3DID, "has_points", &hv_HasPoints);
    GetObjectModel3dParams(hv_ObjectModel3DID, "has_lines", &hv_HasLines);
    GetObjectModel3dParams(hv_ObjectModel3DID, "num_points", &hv_NumPoints);
    GetObjectModel3dParams(hv_ObjectModel3DID, "has_primitive_data", &hv_IsPrimitive);
    GetObjectModel3dParams(hv_ObjectModel3DID, "center", &hv_Center);
    GetObjectModel3dParams(hv_ObjectModel3DID, "diameter", &hv_Diameter);
    GetSystem("opengl_hidden_surface_removal_enable", &hv_OpenGlHiddenSurface);
    SetSystem("opengl_hidden_surface_removal_enable", "false");
    //Sort the objects by inverse z
    hv_CenterX = ((const HTuple &) hv_Center)[HTuple::TupleGenSequence(0, (hv_Center.TupleLength()) - 1, 3)];
    hv_CenterY = ((const HTuple &) hv_Center)[HTuple::TupleGenSequence(0, (hv_Center.TupleLength()) - 1, 3) + 1];
    hv_CenterZ = ((const HTuple &) hv_Center)[HTuple::TupleGenSequence(0, (hv_Center.TupleLength()) - 1, 3) + 2];
    hv_PosObjectsZ = HTuple();
    if (0 != (int((hv_PosesOut.TupleLength()) > 7))) {
        {
            HTuple end_val41 = (hv_ObjectModel3DID.TupleLength()) - 1;
            HTuple step_val41 = 1;
            for (hv_I = 0; hv_I.Continue(end_val41, step_val41); hv_I += step_val41) {
                QCoreApplication::processEvents();
                hv_Pose = hv_PosesOut.TupleSelectRange(hv_I * 7, (hv_I * 7) + 6);
                PoseToHomMat3d(hv_Pose, &hv_HomMat3DObj);
                AffineTransPoint3d(hv_HomMat3DObj, HTuple(hv_CenterX[hv_I]), HTuple(hv_CenterY[hv_I]),
                                   HTuple(hv_CenterZ[hv_I]), &hv_PosObjCenterX, &hv_PosObjCenterY, &hv_PosObjCenterZ);
                hv_PosObjectsZ = hv_PosObjectsZ.TupleConcat(hv_PosObjCenterZ);
            }
        }
    } else {
        hv_Pose = hv_PosesOut.TupleSelectRange(0, 6);
        PoseToHomMat3d(hv_Pose, &hv_HomMat3DObj);
        AffineTransPoint3d(hv_HomMat3DObj, hv_CenterX, hv_CenterY, hv_CenterZ, &hv_PosObjectsX,
                           &hv_PosObjectsY, &hv_PosObjectsZ);
    }
    hv_Idx = HTuple(hv_PosObjectsZ.TupleSortIndex()).TupleInverse();
    hv_Color = "white";
    SetColor(hv_WindowHandleBuffer, hv_Color);
    if (0 != (int((hv_GenParamName.TupleLength()) > 0))) {
        TupleFind(hv_GenParamName, "colored", &hv_Indices1);
        TupleFind(hv_GenParamName, "color", &hv_Indices2);
        if (0 != (int(HTuple(hv_Indices1[0]) != -1))) {
            if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices1[0])]) == 3))) {
                hv_Color.Clear();
                hv_Color[0] = "red";
                hv_Color[1] = "green";
                hv_Color[2] = "blue";
            } else if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices1[0])]) == 6))) {
                hv_Color.Clear();
                hv_Color[0] = "red";
                hv_Color[1] = "green";
                hv_Color[2] = "blue";
                hv_Color[3] = "cyan";
                hv_Color[4] = "magenta";
                hv_Color[5] = "yellow";
            } else if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices1[0])]) == 12))) {
                hv_Color.Clear();
                hv_Color[0] = "red";
                hv_Color[1] = "green";
                hv_Color[2] = "blue";
                hv_Color[3] = "cyan";
                hv_Color[4] = "magenta";
                hv_Color[5] = "yellow";
                hv_Color[6] = "coral";
                hv_Color[7] = "slate blue";
                hv_Color[8] = "spring green";
                hv_Color[9] = "orange red";
                hv_Color[10] = "pink";
                hv_Color[11] = "gold";
            }
        } else if (0 != (int(HTuple(hv_Indices2[0]) != -1))) {
            hv_Color = HTuple(hv_GenParamValue[HTuple(hv_Indices2[0])]);
        }
    }
    {
        HTuple end_val70 = (hv_ObjectModel3DID.TupleLength()) - 1;
        HTuple step_val70 = 1;
        for (hv_J = 0; hv_J.Continue(end_val70, step_val70); hv_J += step_val70) {
            QCoreApplication::processEvents();
            hv_I = HTuple(hv_Idx[hv_J]);
            if (0 != (HTuple(HTuple(HTuple(int(HTuple(hv_HasPolygons[hv_I]) == HTuple("true"))).TupleOr(
                    int(HTuple(hv_HasTri[hv_I]) == HTuple("true")))).TupleOr(
                    int(HTuple(hv_HasPoints[hv_I]) == HTuple("true")))).TupleOr(
                    int(HTuple(hv_HasLines[hv_I]) == HTuple("true"))))) {
                if (0 != (int((hv_GenParamName.TupleLength()) > 0))) {
                    TupleFind(hv_GenParamName, "color_" + hv_I, &hv_Indices3);
                    if (0 != (int(HTuple(hv_Indices3[0]) != -1))) {
                        SetColor(hv_WindowHandleBuffer, HTuple(hv_GenParamValue[HTuple(hv_Indices3[0])]));
                    } else {
                        SetColor(hv_WindowHandleBuffer, HTuple(hv_Color[hv_I % (hv_Color.TupleLength())]));
                    }
                }
                if (0 != (int((hv_PosesOut.TupleLength()) >= ((hv_I * 7) + 6)))) {
                    hv_Pose = hv_PosesOut.TupleSelectRange(hv_I * 7, (hv_I * 7) + 6);
                } else {
                    hv_Pose = hv_PosesOut.TupleSelectRange(0, 6);
                }
                if (0 != (int(HTuple(hv_NumPoints[hv_I]) < 10000))) {
                    ProjectObjectModel3d(&(*ho_ModelContours), HTuple(hv_ObjectModel3DID[hv_I]),
                                         hv_CamParam, hv_Pose, hv_CustomParamName, hv_CustomParamValue);
                    DispObj((*ho_ModelContours), hv_WindowHandleBuffer);
                } else {
                    PoseToHomMat3d(hv_Pose, &hv_HomMat3D);
                    SampleObjectModel3d(HTuple(hv_ObjectModel3DID[hv_I]), "fast", 0.01 * HTuple(hv_Diameter[hv_I]),
                                        HTuple(), HTuple(), &hv_SampledObjectModel3D);
                    ProjectObjectModel3d(&(*ho_ModelContours), hv_SampledObjectModel3D, hv_CamParam,
                                         hv_Pose, "point_size", 1);
                    GetObjectModel3dParams(hv_SampledObjectModel3D, "point_coord_x", &hv_X);
                    GetObjectModel3dParams(hv_SampledObjectModel3D, "point_coord_y", &hv_Y);
                    GetObjectModel3dParams(hv_SampledObjectModel3D, "point_coord_z", &hv_Z);
                    PoseToHomMat3d(hv_Pose, &hv_HomMat3D1);
                    AffineTransPoint3d(hv_HomMat3D1, hv_X, hv_Y, hv_Z, &hv_Qx, &hv_Qy, &hv_Qz);
                    Project3dPoint(hv_Qx, hv_Qy, hv_Qz, hv_CamParam, &hv_Row, &hv_Column);
                    DispObj((*ho_ModelContours), hv_WindowHandleBuffer);
                    ClearObjectModel3d(hv_SampledObjectModel3D);
                }
            } else {
                if (0 != (int((hv_GenParamName.TupleLength()) > 0))) {
                    TupleFind(hv_GenParamName, "color_" + hv_I, &hv_Indices3);
                    if (0 != (int(HTuple(hv_Indices3[0]) != -1))) {
                        SetColor(hv_WindowHandleBuffer, HTuple(hv_GenParamValue[HTuple(hv_Indices3[0])]));
                    } else {
                        SetColor(hv_WindowHandleBuffer, HTuple(hv_Color[hv_I % (hv_Color.TupleLength())]));
                    }
                }
                if (0 != (int((hv_PosesOut.TupleLength()) >= ((hv_I * 7) + 6)))) {
                    hv_Pose = hv_PosesOut.TupleSelectRange(hv_I * 7, (hv_I * 7) + 6);
                } else {
                    hv_Pose = hv_PosesOut.TupleSelectRange(0, 6);
                }
                if (0 != (int(HTuple(hv_IsPrimitive[hv_I]) == HTuple("true")))) {
                    try {
                        ConvexHullObjectModel3d(HTuple(hv_ObjectModel3DID[hv_I]), &hv_ObjectModel3DConvexHull);
                        if (0 != (int(HTuple(hv_NumPoints[hv_I]) < 10000))) {
                            ProjectObjectModel3d(&(*ho_ModelContours), hv_ObjectModel3DConvexHull,
                                                 hv_CamParam, hv_Pose, hv_CustomParamName, hv_CustomParamValue);
                            DispObj((*ho_ModelContours), hv_WindowHandleBuffer);
                        } else {
                            PoseToHomMat3d(hv_Pose, &hv_HomMat3D);
                            SampleObjectModel3d(hv_ObjectModel3DConvexHull, "fast", 0.01 * HTuple(hv_Diameter[hv_I]),
                                                HTuple(), HTuple(), &hv_SampledObjectModel3D);
                            ProjectObjectModel3d(&(*ho_ModelContours), hv_SampledObjectModel3D, hv_CamParam,
                                                 hv_Pose, "point_size", 1);
                            DispObj((*ho_ModelContours), hv_WindowHandleBuffer);
                            ClearObjectModel3d(hv_SampledObjectModel3D);
                        }
                        ClearObjectModel3d(hv_ObjectModel3DConvexHull);
                    }
                        // catch (Exception)
                    catch (HException &HDevExpDefaultException) {
                        HDevExpDefaultException.ToHTuple(&hv_Exception);
                    }
                }
            }
        }
    }
    SetSystem("opengl_hidden_surface_removal_enable", hv_OpenGlHiddenSurface);
    return;
}

// Chapter: Graphics / Text
// Short Description: This procedure writes a text message.
void disp_text_button(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem,
                      HTuple hv_Row, HTuple hv_Column, HTuple hv_TextColor, HTuple hv_ButtonColor) {

    // Local iconic variables
    HObject ho_UpperLeft, ho_LowerRight, ho_Rectangle;

    // Local control variables
    HTuple hv_Red, hv_Green, hv_Blue, hv_Row1Part;
    HTuple hv_Column1Part, hv_Row2Part, hv_Column2Part, hv_RowWin;
    HTuple hv_ColumnWin, hv_WidthWin, hv_HeightWin, hv_Exception;
    HTuple hv_Fac, hv_RGB, hv_RGBL, hv_RGBD, hv_ButtonColorBorderL;
    HTuple hv_ButtonColorBorderD, hv_MaxAscent, hv_MaxDescent;
    HTuple hv_MaxWidth, hv_MaxHeight, hv_R1, hv_C1, hv_FactorRow;
    HTuple hv_FactorColumn, hv_Width, hv_Index, hv_Ascent;
    HTuple hv_Descent, hv_W, hv_H, hv_FrameHeight, hv_FrameWidth;
    HTuple hv_R2, hv_C2, hv_ClipRegion, hv_DrawMode, hv_BorderWidth;
    HTuple hv_CurrentColor;

    //This procedure displays text in a graphics window.
    //
    //Input parameters:
    //WindowHandle: The WindowHandle of the graphics window, where
    //   the message should be displayed
    //String: A tuple of strings containing the text message to be displayed
    //CoordSystem: If set to 'window', the text position is given
    //   with respect to the window coordinate system.
    //   If set to 'image', image coordinates are used.
    //   (This may be useful in zoomed images.)
    //Row: The row coordinate of the desired text position
    //   If set to -1, a default value of 12 is used.
    //Column: The column coordinate of the desired text position
    //   If set to -1, a default value of 12 is used.
    //Color: defines the color of the text as string.
    //   If set to [], '' or 'auto' the currently set color is used.
    //   If a tuple of strings is passed, the colors are used cyclically
    //   for each new textline.
    //ButtonColor: Must be set to a color string (e.g. 'white', '#FF00CC', etc.).
    //             The text is written in a box of that color.
    //
    //Prepare window.
    GetRgb(hv_WindowHandle, &hv_Red, &hv_Green, &hv_Blue);
    GetPart(hv_WindowHandle, &hv_Row1Part, &hv_Column1Part, &hv_Row2Part, &hv_Column2Part);
    GetWindowExtents(hv_WindowHandle, &hv_RowWin, &hv_ColumnWin, &hv_WidthWin, &hv_HeightWin);
    SetPart(hv_WindowHandle, 0, 0, hv_HeightWin - 1, hv_WidthWin - 1);
    //
    //Default settings.
    if (0 != (int(hv_Row == -1))) {
        hv_Row = 12;
    }
    if (0 != (int(hv_Column == -1))) {
        hv_Column = 12;
    }
    if (0 != (int(hv_TextColor == HTuple()))) {
        hv_TextColor = "";
    }
    //
    try {
        color_string_to_rgb(hv_ButtonColor, &hv_RGB);
    }
        // catch (Exception)
    catch (HException &HDevExpDefaultException) {
        HDevExpDefaultException.ToHTuple(&hv_Exception);
        hv_Exception = "Wrong value of control parameter ButtonColor (must be a valid color string)";
        throw HException(hv_Exception);
    }
    hv_Fac = 0.4;
    hv_RGBL = hv_RGB + ((((255.0 - hv_RGB) * hv_Fac) + 0.5).TupleInt());
    hv_RGBD = hv_RGB - (((hv_RGB * hv_Fac) + 0.5).TupleInt());
    hv_ButtonColorBorderL = "#" + (("" + (hv_RGBL.TupleString("02x"))).TupleSum());
    hv_ButtonColorBorderD = "#" + (("" + (hv_RGBD.TupleString("02x"))).TupleSum());
    //
    hv_String = (("" + hv_String) + "").TupleSplit("\n");
    //
    //Estimate extentions of text depending on font size.
    GetFontExtents(hv_WindowHandle, &hv_MaxAscent, &hv_MaxDescent, &hv_MaxWidth, &hv_MaxHeight);
    if (0 != (int(hv_CoordSystem == HTuple("window")))) {
        hv_R1 = hv_Row;
        hv_C1 = hv_Column;
    } else {
        //Transform image to window coordinates.
        hv_FactorRow = (1. * hv_HeightWin) / ((hv_Row2Part - hv_Row1Part) + 1);
        hv_FactorColumn = (1. * hv_WidthWin) / ((hv_Column2Part - hv_Column1Part) + 1);
        hv_R1 = ((hv_Row - hv_Row1Part) + 0.5) * hv_FactorRow;
        hv_C1 = ((hv_Column - hv_Column1Part) + 0.5) * hv_FactorColumn;
    }
    //
    //Display text box depending on text size.
    //
    //Calculate box extents.
    hv_String = (" " + hv_String) + " ";
    hv_Width = HTuple();
    {
        HTuple end_val70 = (hv_String.TupleLength()) - 1;
        HTuple step_val70 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val70, step_val70); hv_Index += step_val70) {
            QCoreApplication::processEvents();
            GetStringExtents(hv_WindowHandle, HTuple(hv_String[hv_Index]), &hv_Ascent, &hv_Descent,
                             &hv_W, &hv_H);
            hv_Width = hv_Width.TupleConcat(hv_W);
        }
    }
    hv_FrameHeight = hv_MaxHeight * (hv_String.TupleLength());
    hv_FrameWidth = (HTuple(0).TupleConcat(hv_Width)).TupleMax();
    hv_R2 = hv_R1 + hv_FrameHeight;
    hv_C2 = hv_C1 + hv_FrameWidth;
    //Display rectangles.
    GetSystem("clip_region", &hv_ClipRegion);
    SetSystem("clip_region", "false");
    GetDraw(hv_WindowHandle, &hv_DrawMode);
    SetDraw(hv_WindowHandle, "fill");
    hv_BorderWidth = 2;
    GenRegionPolygonFilled(&ho_UpperLeft, ((((hv_R1 - hv_BorderWidth).TupleConcat(hv_R1 - hv_BorderWidth)).TupleConcat(
            hv_R1)).TupleConcat(hv_R2)).TupleConcat(hv_R2 + hv_BorderWidth),
                           ((((hv_C1 - hv_BorderWidth).TupleConcat(hv_C2 + hv_BorderWidth)).TupleConcat(
                                   hv_C2)).TupleConcat(hv_C1)).TupleConcat(hv_C1 - hv_BorderWidth));
    GenRegionPolygonFilled(&ho_LowerRight, ((((hv_R2 + hv_BorderWidth).TupleConcat(hv_R1 - hv_BorderWidth)).TupleConcat(
            hv_R1)).TupleConcat(hv_R2)).TupleConcat(hv_R2 + hv_BorderWidth),
                           ((((hv_C2 + hv_BorderWidth).TupleConcat(hv_C2 + hv_BorderWidth)).TupleConcat(
                                   hv_C2)).TupleConcat(hv_C1)).TupleConcat(hv_C1 - hv_BorderWidth));
    GenRectangle1(&ho_Rectangle, hv_R1, hv_C1, hv_R2, hv_C2);
    SetColor(hv_WindowHandle, hv_ButtonColorBorderL);
    DispObj(ho_UpperLeft, hv_WindowHandle);
    SetColor(hv_WindowHandle, hv_ButtonColorBorderD);
    DispObj(ho_LowerRight, hv_WindowHandle);
    SetColor(hv_WindowHandle, hv_ButtonColor);
    DispObj(ho_Rectangle, hv_WindowHandle);
    SetDraw(hv_WindowHandle, hv_DrawMode);
    SetSystem("clip_region", hv_ClipRegion);
    //Write text.
    {
        HTuple end_val96 = (hv_String.TupleLength()) - 1;
        HTuple step_val96 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val96, step_val96); hv_Index += step_val96) {
            QCoreApplication::processEvents();
            hv_CurrentColor = HTuple(hv_TextColor[hv_Index % (hv_TextColor.TupleLength())]);
            if (0 != (HTuple(int(hv_CurrentColor != HTuple(""))).TupleAnd(int(hv_CurrentColor != HTuple("auto"))))) {
                SetColor(hv_WindowHandle, hv_CurrentColor);
            } else {
                SetRgb(hv_WindowHandle, hv_Red, hv_Green, hv_Blue);
            }
            hv_Row = hv_R1 + (hv_MaxHeight * hv_Index);
            DispText(hv_WindowHandle, HTuple(hv_String[hv_Index]), "window", hv_Row, hv_C1,
                     hv_CurrentColor, "box", "false");
        }
    }
    //Reset changed window settings.
    SetRgb(hv_WindowHandle, hv_Red, hv_Green, hv_Blue);
    SetPart(hv_WindowHandle, hv_Row1Part, hv_Column1Part, hv_Row2Part, hv_Column2Part);
    return;
}

// Chapter: Graphics / Output
void disp_title_and_information(HTuple hv_WindowHandle, HTuple hv_Title, HTuple hv_Information) {

    // Local iconic variables

    // Local control variables
    HTuple hv_WinRow, hv_WinColumn, hv_WinWidth;
    HTuple hv_WinHeight, hv_NumTitleLines, hv_Row, hv_Column;
    HTuple hv_TextWidth, hv_NumInfoLines, hv_Ascent, hv_Descent;
    HTuple hv_Width, hv_Height;

    //
    //global tuple gInfoDecor
    //global tuple gInfoPos
    //global tuple gTitlePos
    //global tuple gTitleDecor
    //
    GetWindowExtents(hv_WindowHandle, &hv_WinRow, &hv_WinColumn, &hv_WinWidth, &hv_WinHeight);
    hv_Title = (("" + hv_Title) + "").TupleSplit("\n");
    hv_NumTitleLines = hv_Title.TupleLength();
    if (0 != (int(hv_NumTitleLines > 0))) {
        hv_Row = 12;
        if (0 != (int(ExpGetGlobalVar_gTitlePos() == HTuple("UpperLeft")))) {
            hv_Column = 12;
        } else if (0 != (int(ExpGetGlobalVar_gTitlePos() == HTuple("UpperCenter")))) {
            max_line_width(hv_WindowHandle, hv_Title, &hv_TextWidth);
            hv_Column = (hv_WinWidth / 2) - (hv_TextWidth / 2);
        } else if (0 != (int(ExpGetGlobalVar_gTitlePos() == HTuple("UpperRight")))) {
            if (0 != (int(HTuple(ExpGetGlobalVar_gTitleDecor()[1]) == HTuple("true")))) {
                max_line_width(hv_WindowHandle, hv_Title + "  ", &hv_TextWidth);
            } else {
                max_line_width(hv_WindowHandle, hv_Title, &hv_TextWidth);
            }
            hv_Column = (hv_WinWidth - hv_TextWidth) - 10;
        } else {
            //Unknown position!
            // stop(...); only in hdevelop
        }
        disp_message(hv_WindowHandle, hv_Title, "window", hv_Row, hv_Column, HTuple(ExpGetGlobalVar_gTitleDecor()[0]),
                     HTuple(ExpGetGlobalVar_gTitleDecor()[1]));
    }
    hv_Information = (("" + hv_Information) + "").TupleSplit("\n");
    hv_NumInfoLines = hv_Information.TupleLength();
    if (0 != (int(hv_NumInfoLines > 0))) {
        if (0 != (int(ExpGetGlobalVar_gInfoPos() == HTuple("UpperLeft")))) {
            hv_Row = 12;
            hv_Column = 12;
        } else if (0 != (int(ExpGetGlobalVar_gInfoPos() == HTuple("UpperRight")))) {
            if (0 != (int(HTuple(ExpGetGlobalVar_gInfoDecor()[1]) == HTuple("true")))) {
                max_line_width(hv_WindowHandle, hv_Information + "  ", &hv_TextWidth);
            } else {
                max_line_width(hv_WindowHandle, hv_Information, &hv_TextWidth);
            }
            hv_Row = 12;
            hv_Column = (hv_WinWidth - hv_TextWidth) - 12;
        } else if (0 != (int(ExpGetGlobalVar_gInfoPos() == HTuple("LowerLeft")))) {
            GetStringExtents(hv_WindowHandle, hv_Information, &hv_Ascent, &hv_Descent,
                             &hv_Width, &hv_Height);
            hv_Row = (hv_WinHeight -
                      (((HTuple(0).TupleMax2(hv_NumInfoLines - 1)) * (hv_Ascent + hv_Descent)) + hv_Height)) - 12;
            hv_Column = 12;
        } else {
            //Unknown position!
            // stop(...); only in hdevelop
        }
        disp_message(hv_WindowHandle, hv_Information, "window", hv_Row, hv_Column,
                     HTuple(ExpGetGlobalVar_gInfoDecor()[0]),
                     HTuple(ExpGetGlobalVar_gInfoDecor()[1]));
    }
    //
    return;
}

// Chapter: Graphics / Output
// Short Description: Renders 3D object models in a buffer window.
void dump_image_output(HObject ho_BackgroundImage, HTuple hv_WindowHandleBuffer,
                       HTuple hv_Scene3D, HTuple hv_AlphaOrig, HTuple hv_ObjectModel3DID, HTuple hv_GenParamName,
                       HTuple hv_GenParamValue, HTuple hv_CamParam, HTuple hv_Poses, HTuple hv_ColorImage,
                       HTuple hv_Title, HTuple hv_Information, HTuple hv_Labels, HTuple hv_VisualizeTrackball,
                       HTuple hv_DisplayContinueButton, HTuple hv_TrackballCenterRow, HTuple hv_TrackballCenterCol,
                       HTuple hv_TrackballRadiusPixel, HTuple hv_SelectedObject, HTuple hv_VisualizeRotationCenter,
                       HTuple hv_RotationCenter) {

    // Local iconic variables
    HObject ho_TrackballContour, ho_CrossRotCenter;
    HObject ho_ModelContours;

    // Local control variables
    HTuple ExpTmpLocalVar_gUsesOpenGL, hv_Exception;
    HTuple hv_Index, hv_Exception1, hv_DeselectedIdx, hv_DeselectedName;
    HTuple hv_DeselectedValue, hv_Pose, hv_HomMat3D, hv_Center;
    HTuple hv_CenterCamX, hv_CenterCamY, hv_CenterCamZ, hv_CenterRow;
    HTuple hv_CenterCol, hv_Label, hv_Sublabels, hv_Ascent;
    HTuple hv_Descent, hv_TextWidth, hv_TextHeight, hv_Index2;
    HTuple hv_TextWidth2, hv_TextHeight2, hv_RotCenterRow;
    HTuple hv_RotCenterCol, hv_Orientation, hv_Colors;

    //global tuple gAlphaDeselected
    //global tuple gTerminationButtonLabel
    //global tuple gDispObjOffset
    //global tuple gLabelsDecor
    //global tuple gUsesOpenGL
    //
    //Display background image
    ClearWindow(hv_WindowHandleBuffer);
    if (0 != hv_ColorImage) {
        DispColor(ho_BackgroundImage, hv_WindowHandleBuffer);
    } else {
        DispImage(ho_BackgroundImage, hv_WindowHandleBuffer);
    }
    //
    //Display objects
    if (0 != (int((hv_SelectedObject.TupleSum()) == (hv_SelectedObject.TupleLength())))) {
        if (0 != (int(ExpGetGlobalVar_gUsesOpenGL() == HTuple("true")))) {
            try {
                DisplayScene3d(hv_WindowHandleBuffer, hv_Scene3D, 0);
            }
                // catch (Exception)
            catch (HException &HDevExpDefaultException) {
                HDevExpDefaultException.ToHTuple(&hv_Exception);
                if (0 != (HTuple(HTuple(int(HTuple(hv_Exception[0]) == 5185)).TupleOr(
                        int(HTuple(hv_Exception[0]) == 5188))).TupleOr(int(HTuple(hv_Exception[0]) == 5187)))) {
                    ExpTmpLocalVar_gUsesOpenGL = "false";
                    ExpSetGlobalVar_gUsesOpenGL(ExpTmpLocalVar_gUsesOpenGL);
                } else {
                    throw HException(hv_Exception);
                }
            }
        }
        if (0 != (int(ExpGetGlobalVar_gUsesOpenGL() == HTuple("false")))) {
            //* NO OpenGL, use fallback
            disp_object_model_no_opengl(&ho_ModelContours, hv_ObjectModel3DID, hv_GenParamName,
                                        hv_GenParamValue, hv_WindowHandleBuffer, hv_CamParam, hv_Poses);
        }
    } else {
        {
            HTuple end_val32 = (hv_AlphaOrig.TupleLength()) - 1;
            HTuple step_val32 = 1;
            for (hv_Index = 0; hv_Index.Continue(end_val32, step_val32); hv_Index += step_val32) {
                QCoreApplication::processEvents();
                if (0 != (int(HTuple(hv_SelectedObject[hv_Index]) == 1))) {
                    SetScene3dInstanceParam(hv_Scene3D, hv_Index, "alpha", HTuple(hv_AlphaOrig[hv_Index]));
                } else {
                    SetScene3dInstanceParam(hv_Scene3D, hv_Index, "alpha", ExpGetGlobalVar_gAlphaDeselected());
                }
            }
        }
        try {
            if (0 != (int(ExpGetGlobalVar_gUsesOpenGL() == HTuple("false")))) {
                throw HException(HTuple());
            }
            DisplayScene3d(hv_WindowHandleBuffer, hv_Scene3D, 0);
        }
            // catch (Exception1)
        catch (HException &HDevExpDefaultException) {
            HDevExpDefaultException.ToHTuple(&hv_Exception1);
            //* NO OpenGL, use fallback
            hv_DeselectedIdx = hv_SelectedObject.TupleFind(0);
            if (0 != (int(hv_DeselectedIdx != -1))) {
                hv_DeselectedName = "color_" + hv_DeselectedIdx;
                hv_DeselectedValue = HTuple(hv_DeselectedName.TupleLength(), "gray");
            }
            disp_object_model_no_opengl(&ho_ModelContours, hv_ObjectModel3DID,
                                        hv_GenParamName.TupleConcat(hv_DeselectedName),
                                        hv_GenParamValue.TupleConcat(hv_DeselectedValue), hv_WindowHandleBuffer,
                                        hv_CamParam, hv_Poses);
        }
        {
            HTuple end_val53 = (hv_AlphaOrig.TupleLength()) - 1;
            HTuple step_val53 = 1;
            for (hv_Index = 0; hv_Index.Continue(end_val53, step_val53); hv_Index += step_val53) {
                QCoreApplication::processEvents();
                SetScene3dInstanceParam(hv_Scene3D, hv_Index, "alpha", HTuple(hv_AlphaOrig[hv_Index]));
            }
        }
    }
    //
    //Display labels
    if (0 != (int(hv_Labels != 0))) {
        SetColor(hv_WindowHandleBuffer, HTuple(ExpGetGlobalVar_gLabelsDecor()[0]));
        {
            HTuple end_val61 = (hv_ObjectModel3DID.TupleLength()) - 1;
            HTuple step_val61 = 1;
            for (hv_Index = 0; hv_Index.Continue(end_val61, step_val61); hv_Index += step_val61) {
                QCoreApplication::processEvents();
                //Project the center point of the current model
                hv_Pose = hv_Poses.TupleSelectRange(hv_Index * 7, (hv_Index * 7) + 6);
                PoseToHomMat3d(hv_Pose, &hv_HomMat3D);
                try {
                    GetObjectModel3dParams(HTuple(hv_ObjectModel3DID[hv_Index]), "center", &hv_Center);
                    AffineTransPoint3d(hv_HomMat3D, HTuple(hv_Center[0]), HTuple(hv_Center[1]),
                                       HTuple(hv_Center[2]), &hv_CenterCamX, &hv_CenterCamY, &hv_CenterCamZ);
                    Project3dPoint(hv_CenterCamX, hv_CenterCamY, hv_CenterCamZ, hv_CamParam,
                                   &hv_CenterRow, &hv_CenterCol);
                    hv_Label = HTuple(hv_Labels[hv_Index]);
                    if (0 != (int(hv_Label != HTuple("")))) {
                        //Work around the fact that get_string_extents() does not handle newlines as we want
                        TupleSplit(hv_Label, "\n", &hv_Sublabels);
                        GetStringExtents(hv_WindowHandleBuffer, HTuple(hv_Sublabels[0]), &hv_Ascent,
                                         &hv_Descent, &hv_TextWidth, &hv_TextHeight);
                        {
                            HTuple end_val74 = (hv_Sublabels.TupleLength()) - 1;
                            HTuple step_val74 = 1;
                            for (hv_Index2 = 1; hv_Index2.Continue(end_val74, step_val74); hv_Index2 += step_val74) {
                                QCoreApplication::processEvents();
                                GetStringExtents(hv_WindowHandleBuffer, HTuple(hv_Sublabels[hv_Index2]),
                                                 &hv_Ascent, &hv_Descent, &hv_TextWidth2, &hv_TextHeight2);
                                hv_TextHeight += hv_TextHeight2;
                                hv_TextWidth = hv_TextWidth.TupleMax2(hv_TextWidth2);
                            }
                        }
                        disp_message(hv_WindowHandleBuffer, hv_Label, "window",
                                     (hv_CenterRow - (hv_TextHeight / 2)) + HTuple(ExpGetGlobalVar_gDispObjOffset()[0]),
                                     (hv_CenterCol - (hv_TextWidth / 2)) + HTuple(ExpGetGlobalVar_gDispObjOffset()[1]),
                                     HTuple(), HTuple(ExpGetGlobalVar_gLabelsDecor()[1]));
                    }
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    //The 3D object model might not have a center because it is empty
                    //-> do not display any label
                }
            }
        }
    }
    //
    //Visualize the trackball if desired
    if (0 != hv_VisualizeTrackball) {
        SetLineWidth(hv_WindowHandleBuffer, 1);
        GenEllipseContourXld(&ho_TrackballContour, hv_TrackballCenterRow, hv_TrackballCenterCol,
                             0, hv_TrackballRadiusPixel, hv_TrackballRadiusPixel, 0, 6.28318, "positive",
                             1.5);
        SetColor(hv_WindowHandleBuffer, "dim gray");
        DispXld(ho_TrackballContour, hv_WindowHandleBuffer);
    }
    //
    //Visualize the rotation center if desired
    if (0 != (HTuple(int(hv_VisualizeRotationCenter != 0)).TupleAnd(int((hv_RotationCenter.TupleLength()) == 3)))) {
        if (0 != (int(HTuple(hv_RotationCenter[2]) < 1e-10))) {
            hv_RotationCenter[2] = 1e-10;
        }
        Project3dPoint(HTuple(hv_RotationCenter[0]), HTuple(hv_RotationCenter[1]), HTuple(hv_RotationCenter[2]),
                       hv_CamParam, &hv_RotCenterRow, &hv_RotCenterCol);
        hv_Orientation = HTuple(90).TupleRad();
        if (0 != (int(hv_VisualizeRotationCenter == 1))) {
            hv_Orientation = HTuple(45).TupleRad();
        }
        GenCrossContourXld(&ho_CrossRotCenter, hv_RotCenterRow, hv_RotCenterCol, hv_TrackballRadiusPixel / 25.0,
                           hv_Orientation);
        SetLineWidth(hv_WindowHandleBuffer, 3);
        QueryColor(hv_WindowHandleBuffer, &hv_Colors);
        SetColor(hv_WindowHandleBuffer, "light gray");
        DispXld(ho_CrossRotCenter, hv_WindowHandleBuffer);
        SetLineWidth(hv_WindowHandleBuffer, 1);
        SetColor(hv_WindowHandleBuffer, "dim gray");
        DispXld(ho_CrossRotCenter, hv_WindowHandleBuffer);
    }
    //
    //Display title
    disp_title_and_information(hv_WindowHandleBuffer, hv_Title, hv_Information);
    //
    //Display the 'Exit' button
    if (0 != (int(hv_DisplayContinueButton == HTuple("true")))) {
        disp_continue_button(hv_WindowHandleBuffer);
    }
    //
    return;
}

// Chapter: Calibration / Camera Parameters
// Short Description: Generate a camera parameter tuple for an area scan camera with distortions modeled by the division model.
void gen_cam_par_area_scan_division(HTuple hv_Focus, HTuple hv_Kappa, HTuple hv_Sx,
                                    HTuple hv_Sy, HTuple hv_Cx, HTuple hv_Cy, HTuple hv_ImageWidth,
                                    HTuple hv_ImageHeight,
                                    HTuple *hv_CameraParam) {

    // Local iconic variables

    //Generate a camera parameter tuple for an area scan camera
    //with distortions modeled by the division model.
    //
    (*hv_CameraParam).Clear();
    (*hv_CameraParam)[0] = "area_scan_division";
    (*hv_CameraParam).Append(hv_Focus);
    (*hv_CameraParam).Append(hv_Kappa);
    (*hv_CameraParam).Append(hv_Sx);
    (*hv_CameraParam).Append(hv_Sy);
    (*hv_CameraParam).Append(hv_Cx);
    (*hv_CameraParam).Append(hv_Cy);
    (*hv_CameraParam).Append(hv_ImageWidth);
    (*hv_CameraParam).Append(hv_ImageHeight);
    return;
}

// Chapter: Calibration / Camera Parameters
// Short Description: Get the value of a specified camera parameter from the camera parameter tuple.
void get_cam_par_data(HTuple hv_CameraParam, HTuple hv_ParamName, HTuple *hv_ParamValue) {

    // Local iconic variables

    // Local control variables
    HTuple hv_CameraType, hv_CameraParamNames, hv_Index;
    HTuple hv_ParamNameInd, hv_I;

    //get_cam_par_data returns in ParamValue the value of the
    //parameter that is given in ParamName from the tuple of
    //camera parameters that is given in CameraParam.
    //
    //Get the parameter names that correspond to the
    //elements in the input camera parameter tuple.
    get_cam_par_names(hv_CameraParam, &hv_CameraType, &hv_CameraParamNames);
    //
    //Find the index of the requested camera data and return
    //the corresponding value.
    (*hv_ParamValue) = HTuple();
    {
        HTuple end_val11 = (hv_ParamName.TupleLength()) - 1;
        HTuple step_val11 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val11, step_val11); hv_Index += step_val11) {
            QCoreApplication::processEvents();
            hv_ParamNameInd = HTuple(hv_ParamName[hv_Index]);
            if (0 != (int(hv_ParamNameInd == HTuple("camera_type")))) {
                (*hv_ParamValue) = (*hv_ParamValue).TupleConcat(hv_CameraType);
                continue;
            }
            hv_I = hv_CameraParamNames.TupleFind(hv_ParamNameInd);
            if (0 != (int(hv_I != -1))) {
                (*hv_ParamValue) = (*hv_ParamValue).TupleConcat(HTuple(hv_CameraParam[hv_I]));
            } else {
                throw HException("Unknown camera parameter " + hv_ParamNameInd);
            }
        }
    }
    return;
}

// Chapter: Calibration / Camera Parameters
// Short Description: Get the names of the parameters in a camera parameter tuple.
void get_cam_par_names(HTuple hv_CameraParam, HTuple *hv_CameraType, HTuple *hv_ParamNames) {

    // Local iconic variables

    // Local control variables
    HTuple hv_CameraParamAreaScanDivision, hv_CameraParamAreaScanPolynomial;
    HTuple hv_CameraParamAreaScanTelecentricDivision, hv_CameraParamAreaScanTelecentricPolynomial;
    HTuple hv_CameraParamAreaScanTiltDivision, hv_CameraParamAreaScanTiltPolynomial;
    HTuple hv_CameraParamAreaScanImageSideTelecentricTiltDivision;
    HTuple hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial;
    HTuple hv_CameraParamAreaScanBilateralTelecentricTiltDivision;
    HTuple hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial;
    HTuple hv_CameraParamAreaScanObjectSideTelecentricTiltDivision;
    HTuple hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial;
    HTuple hv_CameraParamAreaScanHypercentricDivision, hv_CameraParamAreaScanHypercentricPolynomial;
    HTuple hv_CameraParamLinesScanDivision, hv_CameraParamLinesScanPolynomial;
    HTuple hv_CameraParamLinesScanTelecentricDivision, hv_CameraParamLinesScanTelecentricPolynomial;
    HTuple hv_CameraParamAreaScanTiltDivisionLegacy, hv_CameraParamAreaScanTiltPolynomialLegacy;
    HTuple hv_CameraParamAreaScanTelecentricDivisionLegacy;
    HTuple hv_CameraParamAreaScanTelecentricPolynomialLegacy;
    HTuple hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy;
    HTuple hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy;

    //get_cam_par_names returns for each element in the camera
    //parameter tuple that is passed in CameraParam the name
    //of the respective camera parameter. The parameter names
    //are returned in ParamNames. Additionally, the camera
    //type is returned in CameraType. Alternatively, instead of
    //the camera parameters, the camera type can be passed in
    //CameraParam in form of one of the following strings:
    //  - 'area_scan_division'
    //  - 'area_scan_polynomial'
    //  - 'area_scan_tilt_division'
    //  - 'area_scan_tilt_polynomial'
    //  - 'area_scan_telecentric_division'
    //  - 'area_scan_telecentric_polynomial'
    //  - 'area_scan_tilt_bilateral_telecentric_division'
    //  - 'area_scan_tilt_bilateral_telecentric_polynomial'
    //  - 'area_scan_tilt_object_side_telecentric_division'
    //  - 'area_scan_tilt_object_side_telecentric_polynomial'
    //  - 'area_scan_hypercentric_division'
    //  - 'area_scan_hypercentric_polynomial'
    //  - 'line_scan_division'
    //  - 'line_scan_polynomial'
    //  - 'line_scan_telecentric_division'
    //  - 'line_scan_telecentric_polynomial'
    //
    hv_CameraParamAreaScanDivision.Clear();
    hv_CameraParamAreaScanDivision[0] = "focus";
    hv_CameraParamAreaScanDivision[1] = "kappa";
    hv_CameraParamAreaScanDivision[2] = "sx";
    hv_CameraParamAreaScanDivision[3] = "sy";
    hv_CameraParamAreaScanDivision[4] = "cx";
    hv_CameraParamAreaScanDivision[5] = "cy";
    hv_CameraParamAreaScanDivision[6] = "image_width";
    hv_CameraParamAreaScanDivision[7] = "image_height";
    hv_CameraParamAreaScanPolynomial.Clear();
    hv_CameraParamAreaScanPolynomial[0] = "focus";
    hv_CameraParamAreaScanPolynomial[1] = "k1";
    hv_CameraParamAreaScanPolynomial[2] = "k2";
    hv_CameraParamAreaScanPolynomial[3] = "k3";
    hv_CameraParamAreaScanPolynomial[4] = "p1";
    hv_CameraParamAreaScanPolynomial[5] = "p2";
    hv_CameraParamAreaScanPolynomial[6] = "sx";
    hv_CameraParamAreaScanPolynomial[7] = "sy";
    hv_CameraParamAreaScanPolynomial[8] = "cx";
    hv_CameraParamAreaScanPolynomial[9] = "cy";
    hv_CameraParamAreaScanPolynomial[10] = "image_width";
    hv_CameraParamAreaScanPolynomial[11] = "image_height";
    hv_CameraParamAreaScanTelecentricDivision.Clear();
    hv_CameraParamAreaScanTelecentricDivision[0] = "magnification";
    hv_CameraParamAreaScanTelecentricDivision[1] = "kappa";
    hv_CameraParamAreaScanTelecentricDivision[2] = "sx";
    hv_CameraParamAreaScanTelecentricDivision[3] = "sy";
    hv_CameraParamAreaScanTelecentricDivision[4] = "cx";
    hv_CameraParamAreaScanTelecentricDivision[5] = "cy";
    hv_CameraParamAreaScanTelecentricDivision[6] = "image_width";
    hv_CameraParamAreaScanTelecentricDivision[7] = "image_height";
    hv_CameraParamAreaScanTelecentricPolynomial.Clear();
    hv_CameraParamAreaScanTelecentricPolynomial[0] = "magnification";
    hv_CameraParamAreaScanTelecentricPolynomial[1] = "k1";
    hv_CameraParamAreaScanTelecentricPolynomial[2] = "k2";
    hv_CameraParamAreaScanTelecentricPolynomial[3] = "k3";
    hv_CameraParamAreaScanTelecentricPolynomial[4] = "p1";
    hv_CameraParamAreaScanTelecentricPolynomial[5] = "p2";
    hv_CameraParamAreaScanTelecentricPolynomial[6] = "sx";
    hv_CameraParamAreaScanTelecentricPolynomial[7] = "sy";
    hv_CameraParamAreaScanTelecentricPolynomial[8] = "cx";
    hv_CameraParamAreaScanTelecentricPolynomial[9] = "cy";
    hv_CameraParamAreaScanTelecentricPolynomial[10] = "image_width";
    hv_CameraParamAreaScanTelecentricPolynomial[11] = "image_height";
    hv_CameraParamAreaScanTiltDivision.Clear();
    hv_CameraParamAreaScanTiltDivision[0] = "focus";
    hv_CameraParamAreaScanTiltDivision[1] = "kappa";
    hv_CameraParamAreaScanTiltDivision[2] = "image_plane_dist";
    hv_CameraParamAreaScanTiltDivision[3] = "tilt";
    hv_CameraParamAreaScanTiltDivision[4] = "rot";
    hv_CameraParamAreaScanTiltDivision[5] = "sx";
    hv_CameraParamAreaScanTiltDivision[6] = "sy";
    hv_CameraParamAreaScanTiltDivision[7] = "cx";
    hv_CameraParamAreaScanTiltDivision[8] = "cy";
    hv_CameraParamAreaScanTiltDivision[9] = "image_width";
    hv_CameraParamAreaScanTiltDivision[10] = "image_height";
    hv_CameraParamAreaScanTiltPolynomial.Clear();
    hv_CameraParamAreaScanTiltPolynomial[0] = "focus";
    hv_CameraParamAreaScanTiltPolynomial[1] = "k1";
    hv_CameraParamAreaScanTiltPolynomial[2] = "k2";
    hv_CameraParamAreaScanTiltPolynomial[3] = "k3";
    hv_CameraParamAreaScanTiltPolynomial[4] = "p1";
    hv_CameraParamAreaScanTiltPolynomial[5] = "p2";
    hv_CameraParamAreaScanTiltPolynomial[6] = "image_plane_dist";
    hv_CameraParamAreaScanTiltPolynomial[7] = "tilt";
    hv_CameraParamAreaScanTiltPolynomial[8] = "rot";
    hv_CameraParamAreaScanTiltPolynomial[9] = "sx";
    hv_CameraParamAreaScanTiltPolynomial[10] = "sy";
    hv_CameraParamAreaScanTiltPolynomial[11] = "cx";
    hv_CameraParamAreaScanTiltPolynomial[12] = "cy";
    hv_CameraParamAreaScanTiltPolynomial[13] = "image_width";
    hv_CameraParamAreaScanTiltPolynomial[14] = "image_height";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision.Clear();
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[0] = "focus";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[1] = "kappa";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[2] = "tilt";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[3] = "rot";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[4] = "sx";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[5] = "sy";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[6] = "cx";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[7] = "cy";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[8] = "image_width";
    hv_CameraParamAreaScanImageSideTelecentricTiltDivision[9] = "image_height";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial.Clear();
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[0] = "focus";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[1] = "k1";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[2] = "k2";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[3] = "k3";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[4] = "p1";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[5] = "p2";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[6] = "tilt";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[7] = "rot";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[8] = "sx";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[9] = "sy";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[10] = "cx";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[11] = "cy";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[12] = "image_width";
    hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial[13] = "image_height";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision.Clear();
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[0] = "magnification";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[1] = "kappa";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[2] = "tilt";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[3] = "rot";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[4] = "sx";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[5] = "sy";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[6] = "cx";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[7] = "cy";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[8] = "image_width";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivision[9] = "image_height";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial.Clear();
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[0] = "magnification";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[1] = "k1";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[2] = "k2";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[3] = "k3";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[4] = "p1";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[5] = "p2";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[6] = "tilt";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[7] = "rot";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[8] = "sx";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[9] = "sy";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[10] = "cx";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[11] = "cy";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[12] = "image_width";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial[13] = "image_height";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision.Clear();
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[0] = "magnification";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[1] = "kappa";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[2] = "image_plane_dist";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[3] = "tilt";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[4] = "rot";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[5] = "sx";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[6] = "sy";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[7] = "cx";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[8] = "cy";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[9] = "image_width";
    hv_CameraParamAreaScanObjectSideTelecentricTiltDivision[10] = "image_height";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial.Clear();
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[0] = "magnification";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[1] = "k1";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[2] = "k2";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[3] = "k3";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[4] = "p1";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[5] = "p2";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[6] = "image_plane_dist";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[7] = "tilt";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[8] = "rot";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[9] = "sx";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[10] = "sy";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[11] = "cx";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[12] = "cy";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[13] = "image_width";
    hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial[14] = "image_height";
    hv_CameraParamAreaScanHypercentricDivision.Clear();
    hv_CameraParamAreaScanHypercentricDivision[0] = "focus";
    hv_CameraParamAreaScanHypercentricDivision[1] = "kappa";
    hv_CameraParamAreaScanHypercentricDivision[2] = "sx";
    hv_CameraParamAreaScanHypercentricDivision[3] = "sy";
    hv_CameraParamAreaScanHypercentricDivision[4] = "cx";
    hv_CameraParamAreaScanHypercentricDivision[5] = "cy";
    hv_CameraParamAreaScanHypercentricDivision[6] = "image_width";
    hv_CameraParamAreaScanHypercentricDivision[7] = "image_height";
    hv_CameraParamAreaScanHypercentricPolynomial.Clear();
    hv_CameraParamAreaScanHypercentricPolynomial[0] = "focus";
    hv_CameraParamAreaScanHypercentricPolynomial[1] = "k1";
    hv_CameraParamAreaScanHypercentricPolynomial[2] = "k2";
    hv_CameraParamAreaScanHypercentricPolynomial[3] = "k3";
    hv_CameraParamAreaScanHypercentricPolynomial[4] = "p1";
    hv_CameraParamAreaScanHypercentricPolynomial[5] = "p2";
    hv_CameraParamAreaScanHypercentricPolynomial[6] = "sx";
    hv_CameraParamAreaScanHypercentricPolynomial[7] = "sy";
    hv_CameraParamAreaScanHypercentricPolynomial[8] = "cx";
    hv_CameraParamAreaScanHypercentricPolynomial[9] = "cy";
    hv_CameraParamAreaScanHypercentricPolynomial[10] = "image_width";
    hv_CameraParamAreaScanHypercentricPolynomial[11] = "image_height";
    hv_CameraParamLinesScanDivision.Clear();
    hv_CameraParamLinesScanDivision[0] = "focus";
    hv_CameraParamLinesScanDivision[1] = "kappa";
    hv_CameraParamLinesScanDivision[2] = "sx";
    hv_CameraParamLinesScanDivision[3] = "sy";
    hv_CameraParamLinesScanDivision[4] = "cx";
    hv_CameraParamLinesScanDivision[5] = "cy";
    hv_CameraParamLinesScanDivision[6] = "image_width";
    hv_CameraParamLinesScanDivision[7] = "image_height";
    hv_CameraParamLinesScanDivision[8] = "vx";
    hv_CameraParamLinesScanDivision[9] = "vy";
    hv_CameraParamLinesScanDivision[10] = "vz";
    hv_CameraParamLinesScanPolynomial.Clear();
    hv_CameraParamLinesScanPolynomial[0] = "focus";
    hv_CameraParamLinesScanPolynomial[1] = "k1";
    hv_CameraParamLinesScanPolynomial[2] = "k2";
    hv_CameraParamLinesScanPolynomial[3] = "k3";
    hv_CameraParamLinesScanPolynomial[4] = "p1";
    hv_CameraParamLinesScanPolynomial[5] = "p2";
    hv_CameraParamLinesScanPolynomial[6] = "sx";
    hv_CameraParamLinesScanPolynomial[7] = "sy";
    hv_CameraParamLinesScanPolynomial[8] = "cx";
    hv_CameraParamLinesScanPolynomial[9] = "cy";
    hv_CameraParamLinesScanPolynomial[10] = "image_width";
    hv_CameraParamLinesScanPolynomial[11] = "image_height";
    hv_CameraParamLinesScanPolynomial[12] = "vx";
    hv_CameraParamLinesScanPolynomial[13] = "vy";
    hv_CameraParamLinesScanPolynomial[14] = "vz";
    hv_CameraParamLinesScanTelecentricDivision.Clear();
    hv_CameraParamLinesScanTelecentricDivision[0] = "magnification";
    hv_CameraParamLinesScanTelecentricDivision[1] = "kappa";
    hv_CameraParamLinesScanTelecentricDivision[2] = "sx";
    hv_CameraParamLinesScanTelecentricDivision[3] = "sy";
    hv_CameraParamLinesScanTelecentricDivision[4] = "cx";
    hv_CameraParamLinesScanTelecentricDivision[5] = "cy";
    hv_CameraParamLinesScanTelecentricDivision[6] = "image_width";
    hv_CameraParamLinesScanTelecentricDivision[7] = "image_height";
    hv_CameraParamLinesScanTelecentricDivision[8] = "vx";
    hv_CameraParamLinesScanTelecentricDivision[9] = "vy";
    hv_CameraParamLinesScanTelecentricDivision[10] = "vz";
    hv_CameraParamLinesScanTelecentricPolynomial.Clear();
    hv_CameraParamLinesScanTelecentricPolynomial[0] = "magnification";
    hv_CameraParamLinesScanTelecentricPolynomial[1] = "k1";
    hv_CameraParamLinesScanTelecentricPolynomial[2] = "k2";
    hv_CameraParamLinesScanTelecentricPolynomial[3] = "k3";
    hv_CameraParamLinesScanTelecentricPolynomial[4] = "p1";
    hv_CameraParamLinesScanTelecentricPolynomial[5] = "p2";
    hv_CameraParamLinesScanTelecentricPolynomial[6] = "sx";
    hv_CameraParamLinesScanTelecentricPolynomial[7] = "sy";
    hv_CameraParamLinesScanTelecentricPolynomial[8] = "cx";
    hv_CameraParamLinesScanTelecentricPolynomial[9] = "cy";
    hv_CameraParamLinesScanTelecentricPolynomial[10] = "image_width";
    hv_CameraParamLinesScanTelecentricPolynomial[11] = "image_height";
    hv_CameraParamLinesScanTelecentricPolynomial[12] = "vx";
    hv_CameraParamLinesScanTelecentricPolynomial[13] = "vy";
    hv_CameraParamLinesScanTelecentricPolynomial[14] = "vz";
    //Legacy parameter names
    hv_CameraParamAreaScanTiltDivisionLegacy.Clear();
    hv_CameraParamAreaScanTiltDivisionLegacy[0] = "focus";
    hv_CameraParamAreaScanTiltDivisionLegacy[1] = "kappa";
    hv_CameraParamAreaScanTiltDivisionLegacy[2] = "tilt";
    hv_CameraParamAreaScanTiltDivisionLegacy[3] = "rot";
    hv_CameraParamAreaScanTiltDivisionLegacy[4] = "sx";
    hv_CameraParamAreaScanTiltDivisionLegacy[5] = "sy";
    hv_CameraParamAreaScanTiltDivisionLegacy[6] = "cx";
    hv_CameraParamAreaScanTiltDivisionLegacy[7] = "cy";
    hv_CameraParamAreaScanTiltDivisionLegacy[8] = "image_width";
    hv_CameraParamAreaScanTiltDivisionLegacy[9] = "image_height";
    hv_CameraParamAreaScanTiltPolynomialLegacy.Clear();
    hv_CameraParamAreaScanTiltPolynomialLegacy[0] = "focus";
    hv_CameraParamAreaScanTiltPolynomialLegacy[1] = "k1";
    hv_CameraParamAreaScanTiltPolynomialLegacy[2] = "k2";
    hv_CameraParamAreaScanTiltPolynomialLegacy[3] = "k3";
    hv_CameraParamAreaScanTiltPolynomialLegacy[4] = "p1";
    hv_CameraParamAreaScanTiltPolynomialLegacy[5] = "p2";
    hv_CameraParamAreaScanTiltPolynomialLegacy[6] = "tilt";
    hv_CameraParamAreaScanTiltPolynomialLegacy[7] = "rot";
    hv_CameraParamAreaScanTiltPolynomialLegacy[8] = "sx";
    hv_CameraParamAreaScanTiltPolynomialLegacy[9] = "sy";
    hv_CameraParamAreaScanTiltPolynomialLegacy[10] = "cx";
    hv_CameraParamAreaScanTiltPolynomialLegacy[11] = "cy";
    hv_CameraParamAreaScanTiltPolynomialLegacy[12] = "image_width";
    hv_CameraParamAreaScanTiltPolynomialLegacy[13] = "image_height";
    hv_CameraParamAreaScanTelecentricDivisionLegacy.Clear();
    hv_CameraParamAreaScanTelecentricDivisionLegacy[0] = "focus";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[1] = "kappa";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[2] = "sx";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[3] = "sy";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[4] = "cx";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[5] = "cy";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[6] = "image_width";
    hv_CameraParamAreaScanTelecentricDivisionLegacy[7] = "image_height";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy.Clear();
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[0] = "focus";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[1] = "k1";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[2] = "k2";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[3] = "k3";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[4] = "p1";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[5] = "p2";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[6] = "sx";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[7] = "sy";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[8] = "cx";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[9] = "cy";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[10] = "image_width";
    hv_CameraParamAreaScanTelecentricPolynomialLegacy[11] = "image_height";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy.Clear();
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[0] = "focus";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[1] = "kappa";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[2] = "tilt";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[3] = "rot";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[4] = "sx";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[5] = "sy";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[6] = "cx";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[7] = "cy";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[8] = "image_width";
    hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy[9] = "image_height";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy.Clear();
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[0] = "focus";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[1] = "k1";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[2] = "k2";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[3] = "k3";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[4] = "p1";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[5] = "p2";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[6] = "tilt";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[7] = "rot";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[8] = "sx";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[9] = "sy";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[10] = "cx";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[11] = "cy";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[12] = "image_width";
    hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy[13] = "image_height";
    //
    //If the camera type is passed in CameraParam
    if (0 != (HTuple(int((hv_CameraParam.TupleLength()) == 1)).TupleAnd(HTuple(hv_CameraParam[0]).TupleIsString()))) {
        (*hv_CameraType) = ((const HTuple &) hv_CameraParam)[0];
        if (0 != (int((*hv_CameraType) == HTuple("area_scan_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_telecentric_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTelecentricDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_telecentric_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTelecentricPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_image_side_telecentric_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanImageSideTelecentricTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_image_side_telecentric_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_bilateral_telecentric_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanBilateralTelecentricTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_bilateral_telecentric_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_object_side_telecentric_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanObjectSideTelecentricTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_object_side_telecentric_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_hypercentric_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanHypercentricDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_hypercentric_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanHypercentricPolynomial);
        } else if (0 != (HTuple(int((*hv_CameraType) == HTuple("line_scan_division"))).TupleOr(
                int((*hv_CameraType) == HTuple("line_scan"))))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("line_scan_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("line_scan_telecentric_division")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanTelecentricDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("line_scan_telecentric_polynomial")))) {
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanTelecentricPolynomial);
        } else {
            throw HException(("Unknown camera type '" + (*hv_CameraType)) + "' passed in CameraParam.");
        }
        return;
    }
    //
    //If the camera parameters are passed in CameraParam
    if (0 != ((HTuple(hv_CameraParam[0]).TupleIsString()).TupleNot())) {
        //Format of camera parameters for HALCON 12 and earlier
        switch ((hv_CameraParam.TupleLength()).I()) {
            //
            //Area Scan
            case 8:
                //CameraType: 'area_scan_division' or 'area_scan_telecentric_division'
                if (0 != (int(HTuple(hv_CameraParam[0]) != 0.0))) {
                    (*hv_ParamNames) = hv_CameraParamAreaScanDivision;
                    (*hv_CameraType) = "area_scan_division";
                } else {
                    (*hv_ParamNames) = hv_CameraParamAreaScanTelecentricDivisionLegacy;
                    (*hv_CameraType) = "area_scan_telecentric_division";
                }
                break;
            case 10:
                //CameraType: 'area_scan_tilt_division' or 'area_scan_telecentric_tilt_division'
                if (0 != (int(HTuple(hv_CameraParam[0]) != 0.0))) {
                    (*hv_ParamNames) = hv_CameraParamAreaScanTiltDivisionLegacy;
                    (*hv_CameraType) = "area_scan_tilt_division";
                } else {
                    (*hv_ParamNames) = hv_CameraParamAreaScanBilateralTelecentricTiltDivisionLegacy;
                    (*hv_CameraType) = "area_scan_tilt_bilateral_telecentric_division";
                }
                break;
            case 12:
                //CameraType: 'area_scan_polynomial' or 'area_scan_telecentric_polynomial'
                if (0 != (int(HTuple(hv_CameraParam[0]) != 0.0))) {
                    (*hv_ParamNames) = hv_CameraParamAreaScanPolynomial;
                    (*hv_CameraType) = "area_scan_polynomial";
                } else {
                    (*hv_ParamNames) = hv_CameraParamAreaScanTelecentricPolynomialLegacy;
                    (*hv_CameraType) = "area_scan_telecentric_polynomial";
                }
                break;
            case 14:
                //CameraType: 'area_scan_tilt_polynomial' or 'area_scan_telecentric_tilt_polynomial'
                if (0 != (int(HTuple(hv_CameraParam[0]) != 0.0))) {
                    (*hv_ParamNames) = hv_CameraParamAreaScanTiltPolynomialLegacy;
                    (*hv_CameraType) = "area_scan_tilt_polynomial";
                } else {
                    (*hv_ParamNames) = hv_CameraParamAreaScanBilateralTelecentricTiltPolynomialLegacy;
                    (*hv_CameraType) = "area_scan_tilt_bilateral_telecentric_polynomial";
                }
                break;
                //
                //Line Scan
            case 11:
                //CameraType: 'line_scan' or 'line_scan_telecentric'
                if (0 != (int(HTuple(hv_CameraParam[0]) != 0.0))) {
                    (*hv_ParamNames) = hv_CameraParamLinesScanDivision;
                    (*hv_CameraType) = "line_scan_division";
                } else {
                    (*hv_ParamNames) = hv_CameraParamLinesScanTelecentricDivision;
                    (*hv_CameraType) = "line_scan_telecentric_division";
                }
                break;
            default:
                throw HException("Wrong number of values in CameraParam.");
        }
    } else {
        //Format of camera parameters since HALCON 13
        (*hv_CameraType) = ((const HTuple &) hv_CameraParam)[0];
        if (0 != (int((*hv_CameraType) == HTuple("area_scan_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 9))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 13))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_telecentric_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 9))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTelecentricDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_telecentric_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 13))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTelecentricPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 12))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 16))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_image_side_telecentric_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 11))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanImageSideTelecentricTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_image_side_telecentric_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 15))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanImageSideTelecentricTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_bilateral_telecentric_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 11))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanBilateralTelecentricTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_bilateral_telecentric_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 15))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanBilateralTelecentricTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_object_side_telecentric_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 12))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanObjectSideTelecentricTiltDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_tilt_object_side_telecentric_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 16))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanObjectSideTelecentricTiltPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_hypercentric_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 9))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanHypercentricDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("area_scan_hypercentric_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 13))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamAreaScanHypercentricPolynomial);
        } else if (0 != (HTuple(int((*hv_CameraType) == HTuple("line_scan_division"))).TupleOr(
                int((*hv_CameraType) == HTuple("line_scan"))))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 12))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("line_scan_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 16))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanPolynomial);
        } else if (0 != (int((*hv_CameraType) == HTuple("line_scan_telecentric_division")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 12))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanTelecentricDivision);
        } else if (0 != (int((*hv_CameraType) == HTuple("line_scan_telecentric_polynomial")))) {
            if (0 != (int((hv_CameraParam.TupleLength()) != 16))) {
                throw HException("Wrong number of values in CameraParam.");
            }
            (*hv_ParamNames).Clear();
            (*hv_ParamNames)[0] = "camera_type";
            (*hv_ParamNames).Append(hv_CameraParamLinesScanTelecentricPolynomial);
        } else {
            throw HException("Unknown camera type in CameraParam.");
        }
    }
    return;
}

// Chapter: Graphics / Output
// Short Description: Compute the center of all given 3D object models.
void get_object_models_center(HTuple hv_ObjectModel3DID, HTuple *hv_Center) {

    // Local iconic variables

    // Local control variables
    HTuple hv_Diameters, hv_Index, hv_Diameter, hv_C;
    HTuple hv_Exception, hv_MD, hv_Weight, hv_SumW, hv_ObjectModel3DIDSelected;
    HTuple hv_InvSum;

    //Compute the mean of all model centers (weighted by the diameter of the object models)
    hv_Diameters = HTuple(hv_ObjectModel3DID.TupleLength(), 0.0);
    {
        HTuple end_val2 = (hv_ObjectModel3DID.TupleLength()) - 1;
        HTuple step_val2 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val2, step_val2); hv_Index += step_val2) {
            QCoreApplication::processEvents();
            try {
                GetObjectModel3dParams(HTuple(hv_ObjectModel3DID[hv_Index]), "diameter_axis_aligned_bounding_box",
                                       &hv_Diameter);
                GetObjectModel3dParams(HTuple(hv_ObjectModel3DID[hv_Index]), "center", &hv_C);
                hv_Diameters[hv_Index] = hv_Diameter;
            }
                // catch (Exception)
            catch (HException &HDevExpDefaultException) {
                HDevExpDefaultException.ToHTuple(&hv_Exception);
                //Object model is empty, has no center etc. -> ignore it by leaving its diameter at zero
            }
        }
    }

    if (0 != (int((hv_Diameters.TupleSum()) > 0))) {
        //Normalize Diameter to use it as weights for a weighted mean of the individual centers
        hv_MD = (hv_Diameters.TupleSelectMask(hv_Diameters.TupleGreaterElem(0))).TupleMean();
        if (0 != (int(hv_MD > 1e-10))) {
            hv_Weight = hv_Diameters / hv_MD;
        } else {
            hv_Weight = hv_Diameters;
        }
        hv_SumW = hv_Weight.TupleSum();
        if (0 != (int(hv_SumW < 1e-10))) {
            hv_Weight = HTuple(hv_Weight.TupleLength(), 1.0);
            hv_SumW = hv_Weight.TupleSum();
        }
        (*hv_Center).Clear();
        (*hv_Center)[0] = 0;
        (*hv_Center)[1] = 0;
        (*hv_Center)[2] = 0;
        {
            HTuple end_val26 = (hv_ObjectModel3DID.TupleLength()) - 1;
            HTuple step_val26 = 1;
            for (hv_Index = 0; hv_Index.Continue(end_val26, step_val26); hv_Index += step_val26) {
                QCoreApplication::processEvents();
                if (0 != (int(HTuple(hv_Diameters[hv_Index]) > 0))) {
                    hv_ObjectModel3DIDSelected = HTuple(hv_ObjectModel3DID[hv_Index]);
                    GetObjectModel3dParams(hv_ObjectModel3DIDSelected, "center", &hv_C);
                    (*hv_Center)[0] = HTuple((*hv_Center)[0]) + (HTuple(hv_C[0]) * HTuple(hv_Weight[hv_Index]));
                    (*hv_Center)[1] = HTuple((*hv_Center)[1]) + (HTuple(hv_C[1]) * HTuple(hv_Weight[hv_Index]));
                    (*hv_Center)[2] = HTuple((*hv_Center)[2]) + (HTuple(hv_C[2]) * HTuple(hv_Weight[hv_Index]));
                }
            }
        }
        hv_InvSum = 1.0 / hv_SumW;
        (*hv_Center)[0] = HTuple((*hv_Center)[0]) * hv_InvSum;
        (*hv_Center)[1] = HTuple((*hv_Center)[1]) * hv_InvSum;
        (*hv_Center)[2] = HTuple((*hv_Center)[2]) * hv_InvSum;
    } else {
        (*hv_Center) = HTuple();
    }
    return;
}

// Chapter: Graphics / Output
// Short Description: Get the center of the virtual trackback that is used to move the camera.
void get_trackball_center(HTuple hv_SelectedObject, HTuple hv_TrackballRadiusPixel,
                          HTuple hv_ObjectModel3D, HTuple hv_Poses, HTuple *hv_TBCenter, HTuple *hv_TBSize) {

    // Local iconic variables

    // Local control variables
    HTuple hv_NumModels, hv_Diameter, hv_Index, hv_Center;
    HTuple hv_CurrDiameter, hv_Exception, hv_MD, hv_Weight;
    HTuple hv_SumW, hv_PoseSelected, hv_HomMat3D, hv_TBCenterCamX;
    HTuple hv_TBCenterCamY, hv_TBCenterCamZ, hv_InvSum;

    //
    hv_NumModels = hv_ObjectModel3D.TupleLength();
    (*hv_TBCenter)[0] = 0;
    (*hv_TBCenter)[1] = 0;
    (*hv_TBCenter)[2] = 0;
    hv_Diameter = HTuple(hv_ObjectModel3D.TupleLength(), 0.0);
    {
        HTuple end_val6 = (hv_ObjectModel3D.TupleLength()) - 1;
        HTuple step_val6 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val6, step_val6); hv_Index += step_val6) {
            QCoreApplication::processEvents();
            try {
                GetObjectModel3dParams(HTuple(hv_ObjectModel3D[hv_Index]), "center", &hv_Center);
                GetObjectModel3dParams(HTuple(hv_ObjectModel3D[hv_Index]), "diameter_axis_aligned_bounding_box",
                                       &hv_CurrDiameter);
                hv_Diameter[hv_Index] = hv_CurrDiameter;
            }
                // catch (Exception)
            catch (HException &HDevExpDefaultException) {
                HDevExpDefaultException.ToHTuple(&hv_Exception);
                //3D object model is empty or otherwise malformed -> ignore
            }
        }
    }
    //Normalize Diameter to use it as weights for a weighted mean of the individual centers
    hv_MD = hv_Diameter.TupleMean();
    if (0 != (int(hv_MD > 1e-10))) {
        hv_Weight = hv_Diameter / hv_MD;
    } else {
        hv_Weight = hv_Diameter;
    }
    hv_SumW = (hv_Weight.TupleSelectMask((hv_SelectedObject.TupleSgn()).TupleAbs())).TupleSum();
    if (0 != (int(hv_SumW < 1e-10))) {
        hv_Weight = HTuple(hv_Weight.TupleLength(), 1.0);
        hv_SumW = (hv_Weight.TupleSelectMask((hv_SelectedObject.TupleSgn()).TupleAbs())).TupleSum();
    }
    if (0 != (int(hv_SumW < 1e-10))) {
        hv_SumW = 1.0;
    }
    {
        HTuple end_val30 = hv_NumModels - 1;
        HTuple step_val30 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val30, step_val30); hv_Index += step_val30) {
            QCoreApplication::processEvents();
            if (0 != (HTuple(hv_SelectedObject[hv_Index]).TupleAnd(int(HTuple(hv_Diameter[hv_Index]) > 0)))) {
                hv_PoseSelected = hv_Poses.TupleSelectRange(hv_Index * 7, (hv_Index * 7) + 6);
                PoseToHomMat3d(hv_PoseSelected, &hv_HomMat3D);
                GetObjectModel3dParams(HTuple(hv_ObjectModel3D[hv_Index]), "center", &hv_Center);
                AffineTransPoint3d(hv_HomMat3D, HTuple(hv_Center[0]), HTuple(hv_Center[1]),
                                   HTuple(hv_Center[2]), &hv_TBCenterCamX, &hv_TBCenterCamY, &hv_TBCenterCamZ);
                (*hv_TBCenter)[0] = HTuple((*hv_TBCenter)[0]) + (hv_TBCenterCamX * HTuple(hv_Weight[hv_Index]));
                (*hv_TBCenter)[1] = HTuple((*hv_TBCenter)[1]) + (hv_TBCenterCamY * HTuple(hv_Weight[hv_Index]));
                (*hv_TBCenter)[2] = HTuple((*hv_TBCenter)[2]) + (hv_TBCenterCamZ * HTuple(hv_Weight[hv_Index]));
            }
        }
    }
    if (0 != (int((hv_SelectedObject.TupleMax()) != 0))) {
        hv_InvSum = 1.0 / hv_SumW;
        (*hv_TBCenter)[0] = HTuple((*hv_TBCenter)[0]) * hv_InvSum;
        (*hv_TBCenter)[1] = HTuple((*hv_TBCenter)[1]) * hv_InvSum;
        (*hv_TBCenter)[2] = HTuple((*hv_TBCenter)[2]) * hv_InvSum;
        (*hv_TBSize) = (0.5 + ((0.5 * (hv_SelectedObject.TupleSum())) / hv_NumModels)) * hv_TrackballRadiusPixel;
    } else {
        (*hv_TBCenter) = HTuple();
        (*hv_TBSize) = 0;
    }
    return;
}

// Chapter: Graphics / Output
// Short Description: Get the center of the virtual trackback that is used to move the camera (version for inspection_mode = 'surface').
void get_trackball_center_fixed(HTuple hv_SelectedObject, HTuple hv_TrackballCenterRow,
                                HTuple hv_TrackballCenterCol, HTuple hv_TrackballRadiusPixel, HTuple hv_Scene3D,
                                HTuple hv_ObjectModel3DID, HTuple hv_Poses, HTuple hv_WindowHandleBuffer,
                                HTuple hv_CamParam,
                                HTuple hv_GenParamName, HTuple hv_GenParamValue, HTuple *hv_TBCenter,
                                HTuple *hv_TBSize) {

    // Local iconic variables
    HObject ho_RegionCenter, ho_DistanceImage, ho_Domain;

    // Local control variables
    HTuple hv_NumModels, hv_Width, hv_Height, hv_SelectPose;
    HTuple hv_Index1, hv_Rows, hv_Columns, hv_Grayval, hv_IndicesG;
    HTuple hv_Value, hv_Pos;

    //
    //Determine the trackball center for the fixed trackball
    hv_NumModels = hv_ObjectModel3DID.TupleLength();
    get_cam_par_data(hv_CamParam, "image_width", &hv_Width);
    get_cam_par_data(hv_CamParam, "image_height", &hv_Height);
    //
    //Project the selected objects
    hv_SelectPose = HTuple();
    {
        HTuple end_val8 = (hv_SelectedObject.TupleLength()) - 1;
        HTuple step_val8 = 1;
        for (hv_Index1 = 0; hv_Index1.Continue(end_val8, step_val8); hv_Index1 += step_val8) {
            QCoreApplication::processEvents();
            hv_SelectPose = hv_SelectPose.TupleConcat(HTuple(7, HTuple(hv_SelectedObject[hv_Index1])));
            if (0 != (int(HTuple(hv_SelectedObject[hv_Index1]) == 0))) {
                SetScene3dInstanceParam(hv_Scene3D, hv_Index1, "visible", "false");
            }
        }
    }
    SetScene3dParam(hv_Scene3D, "depth_persistence", "true");
    DisplayScene3d(hv_WindowHandleBuffer, hv_Scene3D, 0);
    SetScene3dParam(hv_Scene3D, "visible", "true");
    //
    //determine the depth of the object point that appears closest to the trackball
    //center
    GenRegionPoints(&ho_RegionCenter, hv_TrackballCenterRow, hv_TrackballCenterCol);
    DistanceTransform(ho_RegionCenter, &ho_DistanceImage, "chamfer-3-4-unnormalized",
                      "false", hv_Width, hv_Height);
    GetDomain(ho_DistanceImage, &ho_Domain);
    GetRegionPoints(ho_Domain, &hv_Rows, &hv_Columns);
    GetGrayval(ho_DistanceImage, hv_Rows, hv_Columns, &hv_Grayval);
    TupleSortIndex(hv_Grayval, &hv_IndicesG);
    GetDisplayScene3dInfo(hv_WindowHandleBuffer, hv_Scene3D, hv_Rows.TupleSelect(hv_IndicesG),
                          hv_Columns.TupleSelect(hv_IndicesG), "depth", &hv_Value);
    TupleFind(hv_Value.TupleSgn(), 1, &hv_Pos);
    //
    SetScene3dParam(hv_Scene3D, "depth_persistence", "false");
    //
    //
    //set TBCenter
    if (0 != (int(hv_Pos != -1))) {
        //if the object is visible in the image
        (*hv_TBCenter).Clear();
        (*hv_TBCenter)[0] = 0;
        (*hv_TBCenter)[1] = 0;
        (*hv_TBCenter).Append(HTuple(hv_Value[HTuple(hv_Pos[0])]));
    } else {
        //if the object is not visible in the image, set the z coordinate to -1
        //to indicate, the the previous z value should be used instead
        (*hv_TBCenter).Clear();
        (*hv_TBCenter)[0] = 0;
        (*hv_TBCenter)[1] = 0;
        (*hv_TBCenter)[2] = -1;
    }
    //
    if (0 != (int((hv_SelectedObject.TupleMax()) != 0))) {
        (*hv_TBSize) = (0.5 + ((0.5 * (hv_SelectedObject.TupleSum())) / hv_NumModels)) * hv_TrackballRadiusPixel;
    } else {
        (*hv_TBCenter) = HTuple();
        (*hv_TBSize) = 0;
    }
    return;
}

// Chapter: Graphics / Output
// Short Description: Get string extends of several lines.
void max_line_width(HTuple hv_WindowHandle, HTuple hv_Lines, HTuple *hv_MaxWidth) {

    // Local iconic variables

    // Local control variables
    HTuple hv_Index, hv_Ascent, hv_Descent, hv_LineWidth;
    HTuple hv_LineHeight;

    //
    (*hv_MaxWidth) = 0;
    {
        HTuple end_val2 = (hv_Lines.TupleLength()) - 1;
        HTuple step_val2 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val2, step_val2); hv_Index += step_val2) {
            QCoreApplication::processEvents();
            GetStringExtents(hv_WindowHandle, HTuple(hv_Lines[hv_Index]), &hv_Ascent, &hv_Descent,
                             &hv_LineWidth, &hv_LineHeight);
            (*hv_MaxWidth) = (hv_LineWidth.TupleConcat((*hv_MaxWidth))).TupleMax();
        }
    }
    return;
}

// Chapter: Graphics / Output
// Short Description: Project an image point onto the trackball
void project_point_on_trackball(HTuple hv_X, HTuple hv_Y, HTuple hv_VirtualTrackball,
                                HTuple hv_TrackballSize, HTuple *hv_V) {

    // Local iconic variables

    // Local control variables
    HTuple hv_R, hv_XP, hv_YP, hv_ZP;

    //
    if (0 != (int(hv_VirtualTrackball == HTuple("shoemake")))) {
        //Virtual Trackball according to Shoemake
        hv_R = ((hv_X * hv_X) + (hv_Y * hv_Y)).TupleSqrt();
        if (0 != (int(hv_R <= hv_TrackballSize))) {
            hv_XP = hv_X;
            hv_YP = hv_Y;
            hv_ZP = ((hv_TrackballSize * hv_TrackballSize) - (hv_R * hv_R)).TupleSqrt();
        } else {
            hv_XP = (hv_X * hv_TrackballSize) / hv_R;
            hv_YP = (hv_Y * hv_TrackballSize) / hv_R;
            hv_ZP = 0;
        }
    } else {
        //Virtual Trackball according to Bell
        hv_R = ((hv_X * hv_X) + (hv_Y * hv_Y)).TupleSqrt();
        if (0 != (int(hv_R <= (hv_TrackballSize * 0.70710678)))) {
            hv_XP = hv_X;
            hv_YP = hv_Y;
            hv_ZP = ((hv_TrackballSize * hv_TrackballSize) - (hv_R * hv_R)).TupleSqrt();
        } else {
            hv_XP = hv_X;
            hv_YP = hv_Y;
            hv_ZP = ((0.6 * hv_TrackballSize) * hv_TrackballSize) / hv_R;
        }
    }
    (*hv_V).Clear();
    (*hv_V).Append(hv_XP);
    (*hv_V).Append(hv_YP);
    (*hv_V).Append(hv_ZP);
    return;
}

// Chapter: Calibration / Camera Parameters
// Short Description: Set the value of a specified camera parameter in the camera parameter tuple.
void set_cam_par_data(HTuple hv_CameraParamIn, HTuple hv_ParamName, HTuple hv_ParamValue,
                      HTuple *hv_CameraParamOut) {

    // Local iconic variables

    // Local control variables
    HTuple hv_Index, hv_ParamNameInd, hv_CameraParamNames;
    HTuple hv_I, hv_CameraType, hv_IsTelecentric;

    //set_cam_par_data sets the value of the parameter that
    //is given in ParamName in the tuple of camera parameters
    //given in CameraParamIn. The modified camera parameters
    //are returned in CameraParamOut.
    //
    //Check for consistent length of input parameters
    if (0 != (int((hv_ParamName.TupleLength()) != (hv_ParamValue.TupleLength())))) {
        throw HException("Different number of values in ParamName and ParamValue");
    }
    //First, get the parameter names that correspond to the
    //elements in the input camera parameter tuple.
    get_cam_par_names(hv_CameraParamIn, &hv_CameraType, &hv_CameraParamNames);
    //
    //Find the index of the requested camera data and return
    //the corresponding value.
    (*hv_CameraParamOut) = hv_CameraParamIn;
    {
        HTuple end_val16 = (hv_ParamName.TupleLength()) - 1;
        HTuple step_val16 = 1;
        for (hv_Index = 0; hv_Index.Continue(end_val16, step_val16); hv_Index += step_val16) {
            QCoreApplication::processEvents();
            hv_ParamNameInd = HTuple(hv_ParamName[hv_Index]);
            hv_I = hv_CameraParamNames.TupleFind(hv_ParamNameInd);
            if (0 != (int(hv_I != -1))) {
                (*hv_CameraParamOut)[hv_I] = HTuple(hv_ParamValue[hv_Index]);
            } else {
                throw HException("Wrong ParamName " + hv_ParamNameInd);
            }
            //Check the consistency of focus and telecentricity
            if (0 != (int(hv_ParamNameInd == HTuple("focus")))) {
                hv_IsTelecentric = HTuple(int((hv_CameraType.TupleStrstr("telecentric")) != -1)).TupleAnd(
                        int((hv_CameraType.TupleStrstr("image_side_telecentric")) == -1));
                if (0 != hv_IsTelecentric) {
                    throw HException(HTuple("Focus for telecentric lenses is always 0, and hence, cannot be changed."));
                }
                if (0 != (HTuple(hv_IsTelecentric.TupleNot()).TupleAnd(int(HTuple(hv_ParamValue[hv_Index]) == 0.0)))) {
                    throw HException("Focus for non-telecentric lenses must not be 0.");
                }
            }
        }
    }
    return;
}

// Chapter: Graphics / Text
// Short Description: Set font independent of OS
void set_display_font(HTuple hv_WindowHandle, HTuple hv_Size, HTuple hv_Font, HTuple hv_Bold,
                      HTuple hv_Slant) {

    // Local iconic variables

    // Local control variables
    HTuple hv_OS, hv_Fonts, hv_Style, hv_Exception;
    HTuple hv_AvailableFonts, hv_Fdx, hv_Indices;

    //This procedure sets the text font of the current window with
    //the specified attributes.
    //
    //Input parameters:
    //WindowHandle: The graphics window for which the font will be set
    //Size: The font size. If Size=-1, the default of 16 is used.
    //Bold: If set to 'true', a bold font is used
    //Slant: If set to 'true', a slanted font is used
    //
    GetSystem("operating_system", &hv_OS);
    if (0 != (HTuple(int(hv_Size == HTuple())).TupleOr(int(hv_Size == -1)))) {
        hv_Size = 16;
    }
    if (0 != (int((hv_OS.TupleSubstr(0, 2)) == HTuple("Win")))) {
        //Restore previous behaviour
        hv_Size = (1.13677 * hv_Size).TupleInt();
    } else {
        hv_Size = hv_Size.TupleInt();
    }
    if (0 != (int(hv_Font == HTuple("Courier")))) {
        hv_Fonts.Clear();
        hv_Fonts[0] = "Courier";
        hv_Fonts[1] = "Courier 10 Pitch";
        hv_Fonts[2] = "Courier New";
        hv_Fonts[3] = "CourierNew";
        hv_Fonts[4] = "Liberation Mono";
    } else if (0 != (int(hv_Font == HTuple("mono")))) {
        hv_Fonts.Clear();
        hv_Fonts[0] = "Consolas";
        hv_Fonts[1] = "Menlo";
        hv_Fonts[2] = "Courier";
        hv_Fonts[3] = "Courier 10 Pitch";
        hv_Fonts[4] = "FreeMono";
        hv_Fonts[5] = "Liberation Mono";
    } else if (0 != (int(hv_Font == HTuple("sans")))) {
        hv_Fonts.Clear();
        hv_Fonts[0] = "Luxi Sans";
        hv_Fonts[1] = "DejaVu Sans";
        hv_Fonts[2] = "FreeSans";
        hv_Fonts[3] = "Arial";
        hv_Fonts[4] = "Liberation Sans";
    } else if (0 != (int(hv_Font == HTuple("serif")))) {
        hv_Fonts.Clear();
        hv_Fonts[0] = "Times New Roman";
        hv_Fonts[1] = "Luxi Serif";
        hv_Fonts[2] = "DejaVu Serif";
        hv_Fonts[3] = "FreeSerif";
        hv_Fonts[4] = "Utopia";
        hv_Fonts[5] = "Liberation Serif";
    } else {
        hv_Fonts = hv_Font;
    }
    hv_Style = "";
    if (0 != (int(hv_Bold == HTuple("true")))) {
        hv_Style += HTuple("Bold");
    } else if (0 != (int(hv_Bold != HTuple("false")))) {
        hv_Exception = "Wrong value of control parameter Bold";
        throw HException(hv_Exception);
    }
    if (0 != (int(hv_Slant == HTuple("true")))) {
        hv_Style += HTuple("Italic");
    } else if (0 != (int(hv_Slant != HTuple("false")))) {
        hv_Exception = "Wrong value of control parameter Slant";
        throw HException(hv_Exception);
    }
    if (0 != (int(hv_Style == HTuple("")))) {
        hv_Style = "Normal";
    }
    QueryFont(hv_WindowHandle, &hv_AvailableFonts);
    hv_Font = "";
    {
        HTuple end_val48 = (hv_Fonts.TupleLength()) - 1;
        HTuple step_val48 = 1;
        for (hv_Fdx = 0; hv_Fdx.Continue(end_val48, step_val48); hv_Fdx += step_val48) {
            QCoreApplication::processEvents();
            hv_Indices = hv_AvailableFonts.TupleFind(HTuple(hv_Fonts[hv_Fdx]));
            if (0 != (int((hv_Indices.TupleLength()) > 0))) {
                if (0 != (int(HTuple(hv_Indices[0]) >= 0))) {
                    hv_Font = HTuple(hv_Fonts[hv_Fdx]);
                    break;
                }
            }
        }
    }
    if (0 != (int(hv_Font == HTuple("")))) {
        throw HException("Wrong value of control parameter Font");
    }
    hv_Font = (((hv_Font + "-") + hv_Style) + "-") + hv_Size;
    SetFont(hv_WindowHandle, hv_Font);
    return;
}

// Chapter: Graphics / Output
// Short Description: Compute the 3D rotation from the mouse movement
void trackball(HTuple hv_MX1, HTuple hv_MY1, HTuple hv_MX2, HTuple hv_MY2, HTuple hv_VirtualTrackball,
               HTuple hv_TrackballSize, HTuple hv_SensFactor, HTuple *hv_QuatRotation) {

    // Local iconic variables

    // Local control variables
    HTuple hv_P1, hv_P2, hv_RotAxis, hv_D, hv_T;
    HTuple hv_RotAngle, hv_Len;

    //
    //Compute the 3D rotation from the mouse movement
    //
    if (0 != (HTuple(int(hv_MX1 == hv_MX2)).TupleAnd(int(hv_MY1 == hv_MY2)))) {
        (*hv_QuatRotation).Clear();
        (*hv_QuatRotation)[0] = 1;
        (*hv_QuatRotation)[1] = 0;
        (*hv_QuatRotation)[2] = 0;
        (*hv_QuatRotation)[3] = 0;
        return;
    }
    //Project the image point onto the trackball
    project_point_on_trackball(hv_MX1, hv_MY1, hv_VirtualTrackball, hv_TrackballSize,
                               &hv_P1);
    project_point_on_trackball(hv_MX2, hv_MY2, hv_VirtualTrackball, hv_TrackballSize,
                               &hv_P2);
    //The cross product of the projected points defines the rotation axis
    tuple_vector_cross_product(hv_P1, hv_P2, &hv_RotAxis);
    //Compute the rotation angle
    hv_D = hv_P2 - hv_P1;
    hv_T = (((hv_D * hv_D).TupleSum()).TupleSqrt()) / (2.0 * hv_TrackballSize);
    if (0 != (int(hv_T > 1.0))) {
        hv_T = 1.0;
    }
    if (0 != (int(hv_T < -1.0))) {
        hv_T = -1.0;
    }
    hv_RotAngle = (2.0 * (hv_T.TupleAsin())) * hv_SensFactor;
    hv_Len = ((hv_RotAxis * hv_RotAxis).TupleSum()).TupleSqrt();
    if (0 != (int(hv_Len > 0.0))) {
        hv_RotAxis = hv_RotAxis / hv_Len;
    }
    AxisAngleToQuat(HTuple(hv_RotAxis[0]), HTuple(hv_RotAxis[1]), HTuple(hv_RotAxis[2]),
                    hv_RotAngle, &(*hv_QuatRotation));
    return;
}

// Chapter: Tuple / Arithmetic
// Short Description: Calculates the cross product of two vectors of length 3.
void tuple_vector_cross_product(HTuple hv_V1, HTuple hv_V2, HTuple *hv_VC) {

    // Local iconic variables

    //The caller must ensure that the length of both input vectors is 3
    (*hv_VC) = (HTuple(hv_V1[1]) * HTuple(hv_V2[2])) - (HTuple(hv_V1[2]) * HTuple(hv_V2[1]));
    (*hv_VC) = (*hv_VC).TupleConcat((HTuple(hv_V1[2]) * HTuple(hv_V2[0])) - (HTuple(hv_V1[0]) * HTuple(hv_V2[2])));
    (*hv_VC) = (*hv_VC).TupleConcat((HTuple(hv_V1[0]) * HTuple(hv_V2[1])) - (HTuple(hv_V1[1]) * HTuple(hv_V2[0])));
    return;
}

// Chapter: Graphics / Output
// Short Description: Interactively display 3D object models
void visualize_object_model_3d(bool isClickable, HTuple hv_WindowHandle, HTuple hv_ObjectModel3D,
                               HTuple hv_CamParam, HTuple hv_PoseIn, HTuple hv_GenParamName, HTuple hv_GenParamValue,
                               HTuple hv_Title, HTuple hv_Label, HTuple hv_Information, HTuple *hv_PoseOut) {
    QCoreApplication::processEvents();
    // Local iconic variables
    HObject ho_Image, ho_ImageDump;

    // Local control variables
    HTuple ExpTmpLocalVar_gDispObjOffset, ExpTmpLocalVar_gLabelsDecor;
    HTuple ExpTmpLocalVar_gInfoDecor, ExpTmpLocalVar_gInfoPos;
    HTuple ExpTmpLocalVar_gTitlePos, ExpTmpLocalVar_gTitleDecor;
    HTuple ExpTmpLocalVar_gTerminationButtonLabel, ExpTmpLocalVar_gAlphaDeselected;
    HTuple ExpTmpLocalVar_gIsSinglePose, ExpTmpLocalVar_gUsesOpenGL;
    HTuple hv_Scene3DTest, hv_Scene3D, hv_WindowHandleBuffer;
    HTuple hv_TrackballSize, hv_VirtualTrackball, hv_MouseMapping;
    HTuple hv_WaitForButtonRelease, hv_MaxNumModels, hv_WindowCenteredRotation;
    HTuple hv_NumModels, hv_SelectedObject, hv_ClipRegion;
    HTuple hv_CPLength, hv_RowNotUsed, hv_ColumnNotUsed, hv_Width;
    HTuple hv_Height, hv_WPRow1, hv_WPColumn1, hv_WPRow2, hv_WPColumn2;
    HTuple hv_CamParamValue, hv_CamWidth, hv_CamHeight, hv_Scale;
    HTuple hv_Indices, hv_DispBackground, hv_Mask, hv_Center;
    HTuple hv_Poses, hv_HomMat3Ds, hv_Sequence, hv_PoseEstimated;
    HTuple hv_Font, hv_Exception, hv_OpenGLInfo, hv_DummyObjectModel3D;
    HTuple hv_CameraIndexTest, hv_PoseTest, hv_InstanceIndexTest;
    HTuple hv_MinImageSize, hv_TrackballRadiusPixel, hv_Ascent;
    HTuple hv_Descent, hv_TextWidth, hv_TextHeight, hv_NumChannels;
    HTuple hv_ColorImage, hv_CameraIndex, hv_AllInstances;
    HTuple hv_SetLight, hv_LightParam, hv_LightPosition, hv_LightKind;
    HTuple hv_LightIndex, hv_PersistenceParamName, hv_PersistenceParamValue;
    HTuple hv_AlphaOrig, hv_I, hv_ParamName, hv_ParamValue;
    HTuple hv_ParamNameTrunk, hv_Instance, hv_HomMat3D, hv_Qx;
    HTuple hv_Qy, hv_Qz, hv_TBCenter, hv_TBSize, hv_ButtonHold;
    HTuple hv_VisualizeTB, hv_MaxIndex, hv_TrackballCenterRow;
    HTuple hv_TrackballCenterCol, hv_GraphEvent, hv_Exit, hv_GraphButtonRow;
    HTuple hv_GraphButtonColumn, hv_GraphButton, hv_ButtonReleased;
    HTuple hv_e;

    //The procedure visualize_object_model_3d can be used to display
    //one or more 3d object models and to interactively modify
    //the object poses by using the mouse.
    //
    //The pose can be modified by moving the mouse while
    //pressing a mouse button. The default settings are:
    //
    // Rotate: Left mouse button
    // Zoom: Shift + Left mouse button (or Center mouse button)
    // Pan: Ctrl + Left mouse button
    //
    //Furthermore, it is possible to select and deselect objects,
    //to decrease the mouse sensitivity, and to toggle the
    //inspection mode (see the description of the generic parameter
    //'inspection_mode' below):
    //
    // (De-)select object(s): Right mouse button
    // Low mouse sensitivity: Alt + Mouse button
    // Toggle inspection mode: Ctrl + Alt + Left mouse button
    //
    //In GenParamName and GenParamValue all generic Parameters
    //of disp_object_model_3d are supported.
    //
    //**********************************************************
    //Define global variables
    //**********************************************************
    //
    //global def tuple gDispObjOffset
    //global def tuple gLabelsDecor
    //global def tuple gInfoDecor
    //global def tuple gInfoPos
    //global def tuple gTitlePos
    //global def tuple gTitleDecor
    //global def tuple gTerminationButtonLabel
    //global def tuple gAlphaDeselected
    //global def tuple gIsSinglePose
    //global def tuple gUsesOpenGL
    //
    //**********************************************************
    //Initialize Handles to enable correct handling in error case
    //**********************************************************
    hv_Scene3DTest = HTuple();
    hv_Scene3D = HTuple();
    hv_WindowHandleBuffer = HTuple();

    //**********************************************************
    //Some user defines that may be adapted if desired
    //**********************************************************
    //
    //TrackballSize defines the diameter of the trackball in
    //the image with respect to the smaller image dimension.
    hv_TrackballSize = 0.8;
    //
    //VirtualTrackball defines the type of virtual trackball that
    //shall be used ('shoemake' or 'bell').
    hv_VirtualTrackball = "shoemake";
    //VirtualTrackball := 'bell'
    //
    //Functionality of mouse buttons
    //    1: Left Button
    //    2: Middle Button
    //    4: Right Button
    //    5: Left+Right Mousebutton
    //  8+x: Shift + Mousebutton
    // 16+x: Ctrl + Mousebutton
    // 48+x: Ctrl + Alt + Mousebutton
    //in the order [Translate, Rotate, Scale, ScaleAlternative1, ScaleAlternative2, SelectObjects, ToggleSelectionMode]
    hv_MouseMapping.Clear();
    hv_MouseMapping[0] = 17;
    hv_MouseMapping[1] = 1;
    hv_MouseMapping[2] = 2;
    hv_MouseMapping[3] = 5;
    hv_MouseMapping[4] = 9;
    hv_MouseMapping[5] = 4;
    hv_MouseMapping[6] = 49;
    //
    //The labels of the objects appear next to their projected
    //center. With gDispObjOffset a fixed offset is added
    //                  R,  C
    ExpTmpLocalVar_gDispObjOffset.Clear();
    ExpTmpLocalVar_gDispObjOffset[0] = -30;
    ExpTmpLocalVar_gDispObjOffset[1] = 0;
    ExpSetGlobalVar_gDispObjOffset(ExpTmpLocalVar_gDispObjOffset);
    //
    //Customize the decoration of the different text elements
    //              Color,   Box
    ExpTmpLocalVar_gInfoDecor.Clear();
    ExpTmpLocalVar_gInfoDecor[0] = "white";
    ExpTmpLocalVar_gInfoDecor[1] = "false";
    ExpSetGlobalVar_gInfoDecor(ExpTmpLocalVar_gInfoDecor);
    ExpTmpLocalVar_gLabelsDecor.Clear();
    ExpTmpLocalVar_gLabelsDecor[0] = "white";
    ExpTmpLocalVar_gLabelsDecor[1] = "false";
    ExpSetGlobalVar_gLabelsDecor(ExpTmpLocalVar_gLabelsDecor);
    ExpTmpLocalVar_gTitleDecor.Clear();
    ExpTmpLocalVar_gTitleDecor[0] = "black";
    ExpTmpLocalVar_gTitleDecor[1] = "true";
    ExpSetGlobalVar_gTitleDecor(ExpTmpLocalVar_gTitleDecor);
    //
    //Customize the position of some text elements
    //  gInfoPos has one of the values
    //  {'UpperLeft', 'LowerLeft', 'UpperRight'}
    ExpTmpLocalVar_gInfoPos = "LowerLeft";
    ExpSetGlobalVar_gInfoPos(ExpTmpLocalVar_gInfoPos);
    //  gTitlePos has one of the values
    //  {'UpperLeft', 'UpperCenter', 'UpperRight'}
    ExpTmpLocalVar_gTitlePos = "UpperLeft";
    ExpSetGlobalVar_gTitlePos(ExpTmpLocalVar_gTitlePos);
    //Alpha value (=1-transparency) that is used for visualizing
    //the objects that are not selected
    ExpTmpLocalVar_gAlphaDeselected = 0.3;
    ExpSetGlobalVar_gAlphaDeselected(ExpTmpLocalVar_gAlphaDeselected);
    //Customize the label of the continue button
    ExpTmpLocalVar_gTerminationButtonLabel = " Continue ";
    ExpSetGlobalVar_gTerminationButtonLabel(ExpTmpLocalVar_gTerminationButtonLabel);
    //Define if the continue button responds to a single click event or
    //if it responds only if the mouse button is released while being placed
    //over the continue button.
    //'true':  Wait until the continue button has been released.
    //         This should be used to avoid unwanted continuations of
    //         subsequent calls of visualize_object_model_3d, which can
    //         otherwise occur if the mouse button remains pressed while the
    //         next visualization is active.
    //'false': Continue the execution already if the continue button is
    //         pressed. This option allows a fast forwarding through
    //         subsequent calls of visualize_object_model_3d.
    hv_WaitForButtonRelease = "true";
    //Number of 3D Object models that can be selected and handled individually.
    //If there are more models passed then this number, some calculations
    //are performed differently and the individual selection and handling
    //of models is not supported anymore. Note that the value of MaxNumModels
    //can be overwritten with the generic parameter max_num_selectable_models.
    hv_MaxNumModels = 1000;
    //Defines the default for the initial state of the rotation center:
    //(1) The rotation center is fixed in the center of the image and lies
    //    on the surface of the object.
    //(2) The rotation center lies in the center of the object.
    hv_WindowCenteredRotation = 2;
    //
    //**********************************************************
    //
    //Initialize some values
    hv_NumModels = hv_ObjectModel3D.TupleLength();
    hv_SelectedObject = HTuple(hv_NumModels, 1);
    //
    //Apply some system settings
    // dev_set_preferences(...); only in hdevelop
    // dev_get_preferences(...); only in hdevelop
    // dev_set_preferences(...); only in hdevelop
    GetSystem("clip_region", &hv_ClipRegion);
    SetSystem("clip_region", "false");
    dev_update_off();
    //
    //Check if GenParamName matches GenParamValue
    if (0 != (int((hv_GenParamName.TupleLength()) != (hv_GenParamValue.TupleLength())))) {
        throw HException("Number of generic parameters does not match number of generic parameter values");
    }
    //
    try {
        //
        //Refactor camera parameters to fit to window size
        //
        hv_CPLength = hv_CamParam.TupleLength();
        GetWindowExtents(hv_WindowHandle, &hv_RowNotUsed, &hv_ColumnNotUsed, &hv_Width,
                         &hv_Height);
        GetPart(hv_WindowHandle, &hv_WPRow1, &hv_WPColumn1, &hv_WPRow2, &hv_WPColumn2);
        SetPart(hv_WindowHandle, 0, 0, hv_Height - 1, hv_Width - 1);
        if (0 != (int(hv_CPLength == 0))) {
            gen_cam_par_area_scan_division(0.06, 0, 8.5e-6, 8.5e-6, hv_Width / 2, hv_Height / 2,
                                           hv_Width, hv_Height, &hv_CamParam);
        } else {
            get_cam_par_data(hv_CamParam,
                             (((((HTuple("sx").Append("sy")).Append("cx")).Append("cy")).Append("image_width")).Append(
                                     "image_height")),
                             &hv_CamParamValue);
            hv_CamWidth = HTuple(hv_CamParamValue[4]).TupleReal();
            hv_CamHeight = HTuple(hv_CamParamValue[5]).TupleReal();
            hv_Scale = ((hv_Width / hv_CamWidth).TupleConcat(hv_Height / hv_CamHeight)).TupleMin();
            set_cam_par_data(hv_CamParam, "sx", HTuple(hv_CamParamValue[0]) / hv_Scale, &hv_CamParam);
            set_cam_par_data(hv_CamParam, "sy", HTuple(hv_CamParamValue[1]) / hv_Scale, &hv_CamParam);
            set_cam_par_data(hv_CamParam, "cx", HTuple(hv_CamParamValue[2]) * hv_Scale, &hv_CamParam);
            set_cam_par_data(hv_CamParam, "cy", HTuple(hv_CamParamValue[3]) * hv_Scale, &hv_CamParam);
            set_cam_par_data(hv_CamParam, "image_width", (HTuple(hv_CamParamValue[4]) * hv_Scale).TupleInt(),
                             &hv_CamParam);
            set_cam_par_data(hv_CamParam, "image_height", (HTuple(hv_CamParamValue[5]) * hv_Scale).TupleInt(),
                             &hv_CamParam);
        }
        //
        //Check the generic parameters for max_num_selectable_models
        //(Note that the default is set above to MaxNumModels := 1000)
        hv_Indices = hv_GenParamName.TupleFind("max_num_selectable_models");
        if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
            if (0 != (HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]).TupleIsNumber())) {
                if (0 != (int(((HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]).TupleNumber()).TupleInt()) < 1))) {
                    //Wrong parameter value: Only integer values greater than 0 are allowed
                    throw HException(
                            "Wrong value for parameter 'max_num_selectable_models' (must be an integer value greater than 0)");
                }
            } else {
                //Wrong parameter value: Only integer values greater than 0 are allowed
                throw HException(
                        "Wrong value for parameter 'max_num_selectable_models' (must be an integer value greater than 0)");
            }
            hv_MaxNumModels = (HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]).TupleNumber()).TupleInt();
            hv_GenParamName = hv_GenParamName.TupleRemove(hv_Indices);
            hv_GenParamValue = hv_GenParamValue.TupleRemove(hv_Indices);
        }
        //
        //Check the generic parameters for window_centered_rotation
        //(Note that the default is set above to WindowCenteredRotation := 2)
        hv_Indices = hv_GenParamName.TupleFind("inspection_mode");
        if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
            if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]) == HTuple("surface")))) {
                hv_WindowCenteredRotation = 1;
            } else if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]) == HTuple("standard")))) {
                hv_WindowCenteredRotation = 2;
            } else {
                //Wrong parameter value, use default value
            }
            hv_GenParamName = hv_GenParamName.TupleRemove(hv_Indices);
            hv_GenParamValue = hv_GenParamValue.TupleRemove(hv_Indices);
        }
        //
        //Check the generic parameters for disp_background
        //(The former parameter name 'use_background' is still supported
        // for compatibility reasons)
        hv_DispBackground = "false";
        if (0 != (int((hv_GenParamName.TupleLength()) > 0))) {
            hv_Mask = (hv_GenParamName.TupleEqualElem("disp_background")).TupleOr(
                    hv_GenParamName.TupleEqualElem("use_background"));
            hv_Indices = hv_Mask.TupleFind(1);
        } else {
            hv_Indices = -1;
        }
        if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
            hv_DispBackground = HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]);
            if (0 != (HTuple(int(hv_DispBackground != HTuple("true"))).TupleAnd(
                    int(hv_DispBackground != HTuple("false"))))) {
                //Wrong parameter value: Only 'true' and 'false' are allowed
                throw HException("Wrong value for parameter 'disp_background' (must be either 'true' or 'false')");
            }
            //Note the the background is handled explicitly in this procedure
            //and therefore, the parameter is removed from the list of
            //parameters and disp_background is always set to true (see below)
            hv_GenParamName = hv_GenParamName.TupleRemove(hv_Indices);
            hv_GenParamValue = hv_GenParamValue.TupleRemove(hv_Indices);
        }
        //
        //Read and check the parameter Label for each object
        if (0 != (int((hv_Label.TupleLength()) == 0))) {
            hv_Label = 0;
        } else if (0 != (int((hv_Label.TupleLength()) == 1))) {
            hv_Label = HTuple(hv_NumModels, hv_Label);
        } else {
            if (0 != (int((hv_Label.TupleLength()) != hv_NumModels))) {
                //Number of elements in Label does not match
                //the number of object models.
                throw HException(((HTuple(HTuple("Number of elements in Label (") + (hv_Label.TupleLength())) +
                                   ") does not match the number of object models(") + hv_NumModels) + ").");
            }
        }
        //
        //Read and check the parameter PoseIn for each object
        get_object_models_center(hv_ObjectModel3D, &hv_Center);
        if (0 != (int(hv_Center == HTuple()))) {
            hv_Center.Clear();
            hv_Center[0] = 0;
            hv_Center[1] = 0;
            hv_Center[2] = 0;
        }
        if (0 != (int((hv_PoseIn.TupleLength()) == 0))) {
            //If no pose was specified by the caller, automatically calculate
            //a pose that is appropriate for the visualization.
            //Set the initial model reference pose. The orientation is parallel
            //to the object coordinate system, the position is at the center
            //of gravity of all models.
            CreatePose(-HTuple(hv_Center[0]), -HTuple(hv_Center[1]), -HTuple(hv_Center[2]),
                       0, 0, 0, "Rp+T", "gba", "point", &hv_PoseIn);
            determine_optimum_pose_distance(hv_ObjectModel3D, hv_CamParam, 0.9, hv_PoseIn,
                                            &hv_PoseEstimated);
            hv_Poses = HTuple();
            hv_HomMat3Ds = HTuple();
            hv_Sequence = HTuple::TupleGenSequence(0, (hv_NumModels * 7) - 1, 1);
            hv_Poses = HTuple(hv_PoseEstimated[hv_Sequence % 7]);
            ExpTmpLocalVar_gIsSinglePose = 1;
            ExpSetGlobalVar_gIsSinglePose(ExpTmpLocalVar_gIsSinglePose);
        } else if (0 != (int((hv_PoseIn.TupleLength()) == 7))) {
            hv_Poses = HTuple();
            hv_HomMat3Ds = HTuple();
            hv_Sequence = HTuple::TupleGenSequence(0, (hv_NumModels * 7) - 1, 1);
            hv_Poses = HTuple(hv_PoseIn[hv_Sequence % 7]);
            ExpTmpLocalVar_gIsSinglePose = 1;
            ExpSetGlobalVar_gIsSinglePose(ExpTmpLocalVar_gIsSinglePose);
        } else {
            if (0 != (int((hv_PoseIn.TupleLength()) != ((hv_ObjectModel3D.TupleLength()) * 7)))) {
                //Wrong number of values of input control parameter 'PoseIn'
                throw HException("Wrong number of values of input control parameter 'PoseIn'.");
            } else {
                hv_Poses = hv_PoseIn;
            }
            ExpTmpLocalVar_gIsSinglePose = 0;
            ExpSetGlobalVar_gIsSinglePose(ExpTmpLocalVar_gIsSinglePose);
        }

        //
        //Open (invisible) buffer window to avoid flickering
        OpenWindow(0, 0, hv_Width, hv_Height, 0, "buffer", "", &hv_WindowHandleBuffer);
        SetPart(hv_WindowHandleBuffer, 0, 0, hv_Height - 1, hv_Width - 1);
        GetFont(hv_WindowHandle, &hv_Font);
        try {
            SetFont(hv_WindowHandleBuffer, hv_Font);
        }
            // catch (Exception)
        catch (HException &HDevExpDefaultException) {
            HDevExpDefaultException.ToHTuple(&hv_Exception);
        }
        //
        // Is OpenGL available and should it be used?
        ExpTmpLocalVar_gUsesOpenGL = "true";
        ExpSetGlobalVar_gUsesOpenGL(ExpTmpLocalVar_gUsesOpenGL);
        hv_Indices = hv_GenParamName.TupleFind("opengl");
        if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
            ExpTmpLocalVar_gUsesOpenGL = HTuple(hv_GenParamValue[HTuple(hv_Indices[0])]);
            ExpSetGlobalVar_gUsesOpenGL(ExpTmpLocalVar_gUsesOpenGL);
            hv_GenParamName = hv_GenParamName.TupleRemove(hv_Indices);
            hv_GenParamValue = hv_GenParamValue.TupleRemove(hv_Indices);
            if (0 != (HTuple(int(ExpGetGlobalVar_gUsesOpenGL() != HTuple("true"))).TupleAnd(
                    int(ExpGetGlobalVar_gUsesOpenGL() != HTuple("false"))))) {
                //Wrong parameter value: Only 'true' and 'false' are allowed
                throw HException("Wrong value for parameter 'opengl' (must be either 'true' or 'false')");
            }
        }
        if (0 != (int(ExpGetGlobalVar_gUsesOpenGL() == HTuple("true")))) {
            GetSystem("opengl_info", &hv_OpenGLInfo);
            if (0 != (int(hv_OpenGLInfo == HTuple("No OpenGL support included.")))) {
                ExpTmpLocalVar_gUsesOpenGL = "false";
                ExpSetGlobalVar_gUsesOpenGL(ExpTmpLocalVar_gUsesOpenGL);
            } else {
                GenObjectModel3dFromPoints(0, 0, 0, &hv_DummyObjectModel3D);
                CreateScene3d(&hv_Scene3DTest);
                AddScene3dCamera(hv_Scene3DTest, hv_CamParam, &hv_CameraIndexTest);
                determine_optimum_pose_distance(hv_DummyObjectModel3D, hv_CamParam, 0.9,
                                                ((((((HTuple(0).Append(0)).Append(0)).Append(0)).Append(0)).Append(
                                                        0)).Append(0)),
                                                &hv_PoseTest);
                AddScene3dInstance(hv_Scene3DTest, hv_DummyObjectModel3D, hv_PoseTest, &hv_InstanceIndexTest);
                try {
                    DisplayScene3d(hv_WindowHandleBuffer, hv_Scene3DTest, hv_InstanceIndexTest);
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    ExpTmpLocalVar_gUsesOpenGL = "false";
                    ExpSetGlobalVar_gUsesOpenGL(ExpTmpLocalVar_gUsesOpenGL);
                }
                ClearScene3d(hv_Scene3DTest);
                hv_Scene3DTest = HTuple();
                ClearObjectModel3d(hv_DummyObjectModel3D);
            }
        }
        //
        //Compute the trackball
        hv_MinImageSize = (hv_Width.TupleConcat(hv_Height)).TupleMin();
        hv_TrackballRadiusPixel = (hv_TrackballSize * hv_MinImageSize) / 2.0;
        //
        //Measure the text extents for the continue button in the
        //graphics window
        GetStringExtents(hv_WindowHandleBuffer, ExpGetGlobalVar_gTerminationButtonLabel() + "  ",
                         &hv_Ascent, &hv_Descent, &hv_TextWidth, &hv_TextHeight);
        //
        //Store background image
        if (0 != (int(hv_DispBackground == HTuple("false")))) {
            ClearWindow(hv_WindowHandle);
        }
        DumpWindowImage(&ho_Image, hv_WindowHandle);
        //Special treatment for color background images necessary
        CountChannels(ho_Image, &hv_NumChannels);
        hv_ColorImage = int(hv_NumChannels == 3);
        //
        CreateScene3d(&hv_Scene3D);
        AddScene3dCamera(hv_Scene3D, hv_CamParam, &hv_CameraIndex);
        AddScene3dInstance(hv_Scene3D, hv_ObjectModel3D, hv_Poses, &hv_AllInstances);
        //Always set 'disp_background' to true,  because it is handled explicitly
        //in this procedure (see above)
        SetScene3dParam(hv_Scene3D, "disp_background", "true");
        //Check if we have to set light specific parameters
        hv_SetLight = hv_GenParamName.TupleRegexpTest("light_");
        if (0 != hv_SetLight) {
            //set position of light source
            hv_Indices = hv_GenParamName.TupleFind("light_position");
            if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
                //If multiple light positions are given, use the last one
                hv_LightParam = (HTuple(
                        hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]).TupleSplit(
                        HTuple(", "))).TupleNumber();
                if (0 != (int((hv_LightParam.TupleLength()) != 4))) {
                    throw HException(
                            "light_position must be given as a string that contains four space separated floating point numbers");
                }
                hv_LightPosition = hv_LightParam.TupleSelectRange(0, 2);
                hv_LightKind = "point_light";
                if (0 != (int(HTuple(hv_LightParam[3]) == 0))) {
                    hv_LightKind = "directional_light";
                }
                //Currently, only one light source is supported
                RemoveScene3dLight(hv_Scene3D, 0);
                AddScene3dLight(hv_Scene3D, hv_LightPosition, hv_LightKind, &hv_LightIndex);
                TupleRemove(hv_GenParamName, hv_Indices, &hv_GenParamName);
                TupleRemove(hv_GenParamValue, hv_Indices, &hv_GenParamValue);
            }
            //set ambient part of light source
            hv_Indices = hv_GenParamName.TupleFind("light_ambient");
            if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
                //If the ambient part is set multiple times, use the last setting
                hv_LightParam = (HTuple(
                        hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]).TupleSplit(
                        HTuple(", "))).TupleNumber();
                if (0 != (int((hv_LightParam.TupleLength()) < 3))) {
                    throw HException(
                            "light_ambient must be given as a string that contains three space separated floating point numbers");
                }
                SetScene3dLightParam(hv_Scene3D, 0, "ambient", hv_LightParam.TupleSelectRange(0, 2));
                TupleRemove(hv_GenParamName, hv_Indices, &hv_GenParamName);
                TupleRemove(hv_GenParamValue, hv_Indices, &hv_GenParamValue);
            }
            //Set diffuse part of light source
            hv_Indices = hv_GenParamName.TupleFind("light_diffuse");
            if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
                //If the diffuse part is set multiple times, use the last setting
                hv_LightParam = (HTuple(
                        hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]).TupleSplit(
                        HTuple(", "))).TupleNumber();
                if (0 != (int((hv_LightParam.TupleLength()) < 3))) {
                    throw HException(
                            "light_diffuse must be given as a string that contains three space separated floating point numbers");
                }
                SetScene3dLightParam(hv_Scene3D, 0, "diffuse", hv_LightParam.TupleSelectRange(0, 2));
                TupleRemove(hv_GenParamName, hv_Indices, &hv_GenParamName);
                TupleRemove(hv_GenParamValue, hv_Indices, &hv_GenParamValue);
            }
        }
        //
        //Handle persistence parameters separately because persistence will
        //only be activated immediately before leaving the visualization
        //procedure
        hv_PersistenceParamName = HTuple();
        hv_PersistenceParamValue = HTuple();
        //Set position of light source
        hv_Indices = hv_GenParamName.TupleFind("object_index_persistence");
        if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
            if (0 !=
                (int(HTuple(hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]) == HTuple("true")))) {
                hv_PersistenceParamName = hv_PersistenceParamName.TupleConcat("object_index_persistence");
                hv_PersistenceParamValue = hv_PersistenceParamValue.TupleConcat("true");
            } else if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]) ==
                                 HTuple("false")))) {
            } else {
                throw HException(
                        "Wrong value for parameter 'object_index_persistence' (must be either 'true' or 'false')");
            }
            TupleRemove(hv_GenParamName, hv_Indices, &hv_GenParamName);
            TupleRemove(hv_GenParamValue, hv_Indices, &hv_GenParamValue);
        }
        hv_Indices = hv_GenParamName.TupleFind("depth_persistence");
        if (0 != (HTuple(int(hv_Indices != -1)).TupleAnd(int(hv_Indices != HTuple())))) {
            if (0 !=
                (int(HTuple(hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]) == HTuple("true")))) {
                hv_PersistenceParamName = hv_PersistenceParamName.TupleConcat("depth_persistence");
                hv_PersistenceParamValue = hv_PersistenceParamValue.TupleConcat("true");
            } else if (0 != (int(HTuple(hv_GenParamValue[HTuple(hv_Indices[(hv_Indices.TupleLength()) - 1])]) ==
                                 HTuple("false")))) {
            } else {
                throw HException("Wrong value for parameter 'depth_persistence' (must be either 'true' or 'false')");
            }
            TupleRemove(hv_GenParamName, hv_Indices, &hv_GenParamName);
            TupleRemove(hv_GenParamValue, hv_Indices, &hv_GenParamValue);
        }
        //
        //Parse the generic parameters
        //- First, all parameters that are understood by set_scene_3d_instance_param
        hv_AlphaOrig = HTuple(hv_NumModels, 1);
        {
            HTuple end_val409 = (hv_GenParamName.TupleLength()) - 1;
            HTuple step_val409 = 1;
            for (hv_I = 0; hv_I.Continue(end_val409, step_val409); hv_I += step_val409) {
                QCoreApplication::processEvents();
                hv_ParamName = HTuple(hv_GenParamName[hv_I]);
                hv_ParamValue = HTuple(hv_GenParamValue[hv_I]);
                //Check if this parameter is understood by set_scene_3d_param
                if (0 != (int(hv_ParamName == HTuple("alpha")))) {
                    hv_AlphaOrig = HTuple(hv_NumModels, hv_ParamValue);
                }
                try {
                    SetScene3dParam(hv_Scene3D, hv_ParamName, hv_ParamValue);
                    continue;
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    if (0 !=
                        (HTuple(int(HTuple(hv_Exception[0]) == 1203)).TupleOr(int(HTuple(hv_Exception[0]) == 1303)))) {
                        throw HException(
                                (("Wrong type or value for parameter " + hv_ParamName) + ": ") + hv_ParamValue);
                    }
                }
                //Check if it is a parameter that is valid for only one instance
                //and therefore can be set only with set_scene_3d_instance_param
                hv_ParamNameTrunk = hv_ParamName.TupleRegexpReplace("_\\d+$", "");
                if (0 != (int(hv_ParamName == hv_ParamNameTrunk))) {
                    hv_Instance = HTuple::TupleGenSequence(0, hv_NumModels - 1, 1);
                } else {
                    hv_Instance = (hv_ParamName.TupleRegexpReplace(("^" + hv_ParamNameTrunk) + "_(\\d+)$",
                                                                   "$1")).TupleNumber();
                    if (0 != (HTuple(int(hv_Instance < 0)).TupleOr(int(hv_Instance > (hv_NumModels - 1))))) {
                        throw HException(("Parameter " + hv_ParamName) + " refers to a non existing 3D object model");
                    }
                }
                try {
                    SetScene3dInstanceParam(hv_Scene3D, hv_Instance, hv_ParamNameTrunk, hv_ParamValue);
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    if (0 !=
                        (HTuple(int(HTuple(hv_Exception[0]) == 1204)).TupleOr(int(HTuple(hv_Exception[0]) == 1304)))) {
                        throw HException(
                                (("Wrong type or value for parameter " + hv_ParamName) + ": ") + hv_ParamValue);
                    } else if (0 != (HTuple(int(HTuple(hv_Exception[0]) == 1203)).TupleOr(
                            int(HTuple(hv_Exception[0]) == 1303)))) {
                        throw HException("Wrong parameter name " + hv_ParamName);
                    } else {
                        throw HException(hv_Exception);
                    }
                }
                if (0 != (int(hv_ParamNameTrunk == HTuple("alpha")))) {
                    hv_AlphaOrig[hv_Instance] = hv_ParamValue;
                }
            }
        }
        //
        //Start the visualization loop
        PoseToHomMat3d(hv_Poses.TupleSelectRange(0, 6), &hv_HomMat3D);
        AffineTransPoint3d(hv_HomMat3D, HTuple(hv_Center[0]), HTuple(hv_Center[1]), HTuple(hv_Center[2]),
                           &hv_Qx, &hv_Qy, &hv_Qz);
        hv_TBCenter.Clear();
        hv_TBCenter.Append(hv_Qx);
        hv_TBCenter.Append(hv_Qy);
        hv_TBCenter.Append(hv_Qz);
        hv_TBSize = (0.5 + ((0.5 * (hv_SelectedObject.TupleSum())) / hv_NumModels)) * hv_TrackballRadiusPixel;
        hv_ButtonHold = 0;
        while (0 != 1) {
            QCoreApplication::processEvents();
            hv_VisualizeTB = int((hv_SelectedObject.TupleMax()) != 0);
            hv_MaxIndex = ((HTuple(hv_ObjectModel3D.TupleLength()).TupleConcat(hv_MaxNumModels)).TupleMin()) - 1;
            //Set trackball fixed in the center of the window
            hv_TrackballCenterRow = hv_Height / 2;
            hv_TrackballCenterCol = hv_Width / 2;
            if (0 != (int(hv_WindowCenteredRotation == 1))) {
                try {
                    get_trackball_center_fixed(hv_SelectedObject.TupleSelectRange(0, hv_MaxIndex),
                                               hv_TrackballCenterRow, hv_TrackballCenterCol, hv_TrackballRadiusPixel,
                                               hv_Scene3D, hv_ObjectModel3D.TupleSelectRange(0, hv_MaxIndex),
                                               hv_Poses.TupleSelectRange(0, ((hv_MaxIndex + 1) * 7) - 1),
                                               hv_WindowHandleBuffer, hv_CamParam, hv_GenParamName, hv_GenParamValue,
                                               &hv_TBCenter, &hv_TBSize);
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    disp_message(hv_WindowHandle, "Surface inspection mode is not available.",
                                 "image", 5, 20, "red", "true");
                    hv_WindowCenteredRotation = 2;
                    get_trackball_center(hv_SelectedObject.TupleSelectRange(0, hv_MaxIndex),
                                         hv_TrackballRadiusPixel, hv_ObjectModel3D.TupleSelectRange(0, hv_MaxIndex),
                                         hv_Poses.TupleSelectRange(0, ((hv_MaxIndex + 1) * 7) - 1), &hv_TBCenter,
                                         &hv_TBSize);
                    WaitSeconds(1);
                }
            } else {
                get_trackball_center(hv_SelectedObject.TupleSelectRange(0, hv_MaxIndex), hv_TrackballRadiusPixel,
                                     hv_ObjectModel3D.TupleSelectRange(0, hv_MaxIndex),
                                     hv_Poses.TupleSelectRange(0, ((hv_MaxIndex + 1) * 7) - 1),
                                     &hv_TBCenter, &hv_TBSize);
            }
            dump_image_output(ho_Image, hv_WindowHandleBuffer, hv_Scene3D, hv_AlphaOrig,
                              hv_ObjectModel3D, hv_GenParamName, hv_GenParamValue, hv_CamParam, hv_Poses,
                              hv_ColorImage, hv_Title, hv_Information, hv_Label, hv_VisualizeTB, "true",
                              hv_TrackballCenterRow, hv_TrackballCenterCol, hv_TBSize, hv_SelectedObject,
                              hv_WindowCenteredRotation, hv_TBCenter);
            DumpWindowImage(&ho_ImageDump, hv_WindowHandleBuffer);
            HDevWindowStack::SetActive(hv_WindowHandle);
            if (HDevWindowStack::IsOpen())
                DispObj(ho_ImageDump, HDevWindowStack::GetActive());
            if (!isClickable)
                break;
            //
            //Check for mouse events
            hv_GraphEvent = 0;
            hv_Exit = 0;
            while (0 != 1) {
                //
                //Check graphic event
                QCoreApplication::processEvents();
                try {
                    GetMpositionSubPix(hv_WindowHandle, &hv_GraphButtonRow, &hv_GraphButtonColumn,
                                       &hv_GraphButton);
                    if (0 != (int(hv_GraphButton != 0))) {
                        if (0 != (HTuple(HTuple(
                                HTuple(int(hv_GraphButtonRow > ((hv_Height - hv_TextHeight) - 25))).TupleAnd(
                                        int(hv_GraphButtonRow < hv_Height))).TupleAnd(
                                int(hv_GraphButtonColumn > ((hv_Width - hv_TextWidth) - 15)))).TupleAnd(
                                int(hv_GraphButtonColumn < hv_Width)))) {
                            //Wait until the continue button has been released
                            if (0 != (int(hv_WaitForButtonRelease == HTuple("true")))) {
                                while (0 != 1) {
                                    QCoreApplication::processEvents();
                                    GetMpositionSubPix(hv_WindowHandle, &hv_GraphButtonRow, &hv_GraphButtonColumn,
                                                       &hv_GraphButton);
                                    if (0 !=
                                        (HTuple(int(hv_GraphButton == 0)).TupleOr(int(hv_GraphButton == HTuple())))) {
                                        if (0 != (HTuple(HTuple(HTuple(int(
                                                hv_GraphButtonRow > ((hv_Height - hv_TextHeight) - 25))).TupleAnd(
                                                int(hv_GraphButtonRow < hv_Height))).TupleAnd(
                                                int(hv_GraphButtonColumn > ((hv_Width - hv_TextWidth) - 15)))).TupleAnd(
                                                int(hv_GraphButtonColumn < hv_Width)))) {
                                            hv_ButtonReleased = 1;
                                        } else {
                                            hv_ButtonReleased = 0;
                                        }
                                        //
                                        break;
                                    }
                                    //Keep waiting until mouse button is released or moved out of the window
                                }
                            } else {
                                hv_ButtonReleased = 1;
                            }
                            //Exit the visualization loop
                            if (0 != hv_ButtonReleased) {
                                hv_Exit = 1;
                                break;
                            }
                        }
                        hv_GraphEvent = 1;
                        break;
                    } else {
                        hv_ButtonHold = 0;
                    }
                }
                    // catch (Exception)
                catch (HException &HDevExpDefaultException) {
                    HDevExpDefaultException.ToHTuple(&hv_Exception);
                    //Keep waiting
                }
            }
            if (0 != hv_GraphEvent) {
                analyze_graph_event(ho_Image, hv_MouseMapping, hv_GraphButton, hv_GraphButtonRow,
                                    hv_GraphButtonColumn, hv_WindowHandle, hv_WindowHandleBuffer, hv_VirtualTrackball,
                                    hv_TrackballSize, hv_SelectedObject, hv_Scene3D, hv_AlphaOrig, hv_ObjectModel3D,
                                    hv_CamParam, hv_Label, hv_Title, hv_Information, hv_GenParamName, hv_GenParamValue,
                                    hv_Poses, hv_ButtonHold, hv_TBCenter, hv_TBSize, hv_WindowCenteredRotation,
                                    hv_MaxNumModels, &hv_Poses, &hv_SelectedObject, &hv_ButtonHold,
                                    &hv_WindowCenteredRotation);
            }
            if (0 != hv_Exit) {
                break;
            }
        }
        //
        //Display final state with persistence, if requested
        //Note that disp_object_model_3d must be used instead of the 3D scene
        if (0 != (int((hv_PersistenceParamName.TupleLength()) > 0))) {
            DispObjectModel3d(hv_WindowHandle, hv_ObjectModel3D, hv_CamParam, hv_Poses,
                              (HTuple("disp_background").Append("alpha")).TupleConcat(hv_PersistenceParamName),
                              (HTuple("true").Append(0.0)).TupleConcat(hv_PersistenceParamValue));
        }
        //
        //Compute the output pose
        if (0 != ExpGetGlobalVar_gIsSinglePose()) {
            (*hv_PoseOut) = hv_Poses.TupleSelectRange(0, 6);
        } else {
            (*hv_PoseOut) = hv_Poses;
        }
        //
        //Clean up
        SetSystem("clip_region", hv_ClipRegion);
        // dev_set_preferences(...); only in hdevelop
        // dev_set_preferences(...); only in hdevelop
        dump_image_output(ho_Image, hv_WindowHandleBuffer, hv_Scene3D, hv_AlphaOrig,
                          hv_ObjectModel3D, hv_GenParamName, hv_GenParamValue, hv_CamParam, hv_Poses,
                          hv_ColorImage, hv_Title, HTuple(), hv_Label, 0, "false", hv_TrackballCenterRow,
                          hv_TrackballCenterCol, hv_TBSize, hv_SelectedObject, hv_WindowCenteredRotation,
                          hv_TBCenter);
        DumpWindowImage(&ho_ImageDump, hv_WindowHandleBuffer);
        HDevWindowStack::SetActive(hv_WindowHandle);
        if (HDevWindowStack::IsOpen())
            DispObj(ho_ImageDump, HDevWindowStack::GetActive());
        CloseWindow(hv_WindowHandleBuffer);
        SetPart(hv_WindowHandle, hv_WPRow1, hv_WPColumn1, hv_WPRow2, hv_WPColumn2);
        ClearScene3d(hv_Scene3D);
        hv_Scene3D = HTuple();
    }
        // catch (Exception)
    catch (HException &HDevExpDefaultException) {
        HDevExpDefaultException.ToHTuple(&hv_Exception);
        try {
            if (0 != (int(0 < (hv_Scene3DTest.TupleLength())))) {
                ClearScene3d(hv_Scene3DTest);
                hv_Scene3DTest = HTuple();
            }
            if (0 != (int(0 < (hv_Scene3D.TupleLength())))) {
                ClearScene3d(hv_Scene3D);
                hv_Scene3D = HTuple();
            }
            if (0 != (int(0 < (hv_WindowHandleBuffer.TupleLength())))) {
                CloseWindow(hv_WindowHandleBuffer);
                hv_WindowHandleBuffer = HTuple();
            }
        }
            // catch (e)
        catch (HException &HDevExpDefaultException) {
            HDevExpDefaultException.ToHTuple(&hv_e);
            //suppress all further exceptions to return the original exception
        }

        throw HException(hv_Exception);
    }
    return;
}

surfaceMatch::surfaceMatch(QObject *parent) : QObject(parent) {
    // file was stored with local-8-bit encoding
    //   -> set the interface encoding accordingly
    SetHcppInterfaceStringEncodingIsUtf8(false);
    qRegisterMetaType<QVariant>("QVariant");
    // Default settings used in HDevelop (can be omitted)
    SetSystem("width", 512);
    SetSystem("height", 512);
    isTrained = false;
    isStartMatch = false;

}


void surfaceMatch::train(QFuture<void> &f, HTuple &hv_ObjectModel3D, double RelSamplingDistance) {
    SurfaceNormalsObjectModel3d(hv_ObjectModel3D, "mls", HTuple(), HTuple(),
                                &hv_temp);
    //Create surface model
    CreateSurfaceModel(hv_temp, RelSamplingDistance, "model_invert_normals", "true",
                       &hv_SurfaceModelID);
/*
    CreateSurfaceModel(hv_ObjectModel3D, RelSamplingDistance, HTuple(), HTuple(), &hv_SurfaceModelID);
*/

    isTrained = true;
}

double surfaceMatch::match(HTuple &hv_ObjectScene3D, double RelSamplingDistance, double KeyPointFraction, HTuple &Pose) { //关键点的比例
    if (isTrained) {
        FindSurfaceModel(hv_SurfaceModelID, hv_ObjectScene3D, RelSamplingDistance, KeyPointFraction, 0.2, "false",
                         ((HTuple("num_matches").Append("scene_normal_computation")).Append("pose_ref_scoring_dist_rel")),
                         ((HTuple(1).Append("mls")).Append(0.03)), &hv_Pose, &hv_Score, &hv_SurfaceMatchingResultID);
        RefineSurfaceModelPose(hv_SurfaceModelID, hv_ObjectScene3D, hv_Pose, 0, "false",
                               HTuple(), HTuple(), &Pose, &hv_Score1, &hv_SurfaceMatchingResultID1);
        return hv_Score.ToDArr()[0];
    }

}

void surfaceMatch::continueMatch(double RelSamplingDistance, double KeyPointFraction) {
    if (isTrained) {
        do{
            QThread::msleep(100);
        }while(hv_ObjectScene3D.Length() < 1);

        while (isStartMatch) {
            QCoreApplication::processEvents();
            readMutex.lock();
            hv_ObjectScene3DClone = hv_ObjectScene3D.Clone();
            readMutex.unlock();
            FindSurfaceModel(hv_SurfaceModelID, hv_ObjectScene3DClone, RelSamplingDistance, KeyPointFraction, 0.2, "false",
                             ((HTuple("num_matches").Append("scene_normal_computation")).Append("pose_ref_scoring_dist_rel")),
                             ((HTuple(1).Append("mls")).Append(0.03))
                             , &hv_Pose, &hv_Score, &hv_SurfaceMatchingResultID);
/*            FindSurfaceModel(hv_SurfaceModelID, hv_ObjectScene3DClone, RelSamplingDistance, KeyPointFraction, 0.2, "false",
                             HTuple("num_matches"),HTuple(1), &hv_Pose, &hv_Score, &hv_SurfaceMatchingResultID);*/
            RefineSurfaceModelPose(hv_SurfaceModelID, hv_ObjectScene3DClone, hv_Pose, 0, "false",
                                   HTuple(), HTuple(), &hv_Pose1, &hv_Score1, &hv_SurfaceMatchingResultID1);
            //再发回主线程
            poseVar.setValue<HTuple>(hv_Pose);
            emit registerComplete(poseVar,hv_Score.ToDArr()[0]);
            poseVar.clear();
        }
    }
}

void surfaceMatch::changeStatus(bool isStart) {
    isStartMatch = isStart;
}