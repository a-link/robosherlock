/*
 * This file was generated by generate_typesystem.py.
 * Filename:    annotation_types
 * Name:        annotation
 * Description: No description given
 * Version:     1.0
 * Vendor:      None
 */
#ifndef __ANNOTATION_TYPES_H__
#define __ANNOTATION_TYPES_H__

#include <rs/feature_structure_proxy.h>
#include <rs/types/type_definitions.h>
#include <rs/types/core_types.h>
#include <rs/types/cv_types.h>
#include <rs/types/tf_types.h>
#include <rs/types/pcl_types.h>

namespace rs
{

/*
 * Annotation containing the generated MLN Atoms from the results of the othre annotations
 */
class MLNAtoms : public Annotation
{
private:
  void initFields()
  {
    atoms.init(this, "atoms");
  }
public:
  // No description given
  ListFeatureStructureEntry<std::string> atoms;

  MLNAtoms(const MLNAtoms &other) :
      Annotation(other)
  {
    initFields();
  }

  MLNAtoms(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Relative size of an object
 */
class SemanticSize : public Annotation
{
private:
  void initFields()
  {
    size.init(this, "size");
    confidence.init(this, "confidence");
  }
public:
  // No description given
  FeatureStructureEntry<std::string> size;
  // No description given
  FeatureStructureEntry<float> confidence;

  SemanticSize(const SemanticSize &other) :
      Annotation(other)
  {
    initFields();
  }

  SemanticSize(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * ARMarker
 */
class ARMarker : public Annotation
{
private:
  void initFields()
  {
    pose.init(this, "pose");
    name.init(this, "name");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<StampedPose> pose;
  // No description given
  FeatureStructureEntry<std::string> name;

  ARMarker(const ARMarker &other) :
      Annotation(other)
  {
    initFields();
  }

  ARMarker(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Annotation for chess and circle boards
 */
class Board : public Annotation
{
private:
  void initFields()
  {
    pointsImage.init(this, "pointsImage");
    pointsWorld.init(this, "pointsWorld");
  }
public:
  // Points of the board in image coordinates
  ComplexFeatureStructureEntry<Mat> pointsImage;
  // Points of the board in world coordinates
  ComplexFeatureStructureEntry<Mat> pointsWorld;

  Board(const Board &other) :
      Annotation(other)
  {
    initFields();
  }

  Board(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * This is a Location in a TF frame. Also stores the TF to fixed link.
 */
class TFLocation : public Annotation
{
private:
  void initFields()
  {
    reference_desc.init(this, "reference_desc");
    frame_id.init(this, "frame_id");
    transform_to_fixed.init(this, "transform_to_fixed");
  }
public:
  // Could be "on", "in front of" etc?
  FeatureStructureEntry<std::string> reference_desc;
  // No description given
  FeatureStructureEntry<std::string> frame_id;
  // No description given
  ComplexFeatureStructureEntry<StampedTransform> transform_to_fixed;

  TFLocation(const TFLocation &other) :
      Annotation(other)
  {
    initFields();
  }

  TFLocation(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Annotation for the main plane
 */
class Plane : public Annotation
{
private:
  void initFields()
  {
    model.init(this, "model");
    roi.init(this, "roi");
    mask.init(this, "mask");
    inliers.init(this, "inliers");
  }
public:
  // Normal and distance of the plane
  ArrayFeatureStructureEntry<float> model;
  // Axis aligned bounding box of plane inliers
  ComplexFeatureStructureEntry<Rect> roi;
  // Mask of the plane inliers
  ComplexFeatureStructureEntry<Mat> mask;
  // Plane inliers
  ArrayFeatureStructureEntry<int> inliers;

  Plane(const Plane &other) :
      Annotation(other)
  {
    initFields();
  }

  Plane(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Poses for Grasping
 */
class GraspAnnotation : public Annotation
{
private:
  void initFields()
  {
    grasp_pose.init(this, "grasp_pose");
  }
public:
  // No description given
  ArrayFeatureStructureEntry<StampedPose> grasp_pose;

  GraspAnnotation(const GraspAnnotation &other) :
      Annotation(other)
  {
    initFields();
  }

  GraspAnnotation(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Parts of a cluster
 */
class ClusterPart : public Annotation
{
private:
  void initFields()
  {
    indices.init(this, "indices");
    name.init(this, "name");
    clID.init(this, "clID");
    pose.init(this, "pose");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<PointIndices> indices;
  // No description given
  FeatureStructureEntry<std::string> name;
  // No description given
  FeatureStructureEntry<int> clID;
  // No description given
  ComplexFeatureStructureEntry<StampedPose> pose;

  ClusterPart(const ClusterPart &other) :
      Annotation(other)
  {
    initFields();
  }

  ClusterPart(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Segment with inside segements and 2D attributes
 */
class Segment : public Annotation
{
private:
  void initFields()
  {
    contour.init(this, "contour");
    children.init(this, "children");
    area.init(this, "area");
    childrenArea.init(this, "childrenArea");
    holes.init(this, "holes");
    rect.init(this, "rect");
    moments.init(this, "moments");
    huMoments.init(this, "huMoments");
    center.init(this, "center");
    axisX.init(this, "axisX");
    axisY.init(this, "axisY");
    alpha.init(this, "alpha");
    rotation.init(this, "rotation");
    translation.init(this, "translation");
    lengthX.init(this, "lengthX");
    lengthY.init(this, "lengthY");
  }
public:
  // Contour points of segment
  ArrayFeatureStructureEntry<Point> contour;
  // Segments inside this segment
  ArrayFeatureStructureEntry<Annotation> children;
  // Area in pixles
  FeatureStructureEntry<INT64> area;
  // Area of inside segments
  FeatureStructureEntry<INT64> childrenArea;
  // Number of inside segments
  FeatureStructureEntry<int> holes;
  // Axis alignd bounding rect
  ComplexFeatureStructureEntry<Rect> rect;
  // Image moments
  ComplexFeatureStructureEntry<Moments> moments;
  // hu moments
  ArrayFeatureStructureEntry<double> huMoments;
  // Center of mass
  ComplexFeatureStructureEntry<Point2d> center;
  // Direction of x-axis scaled to the length in x direction
  ComplexFeatureStructureEntry<Point2d> axisX;
  // Direction of y-axis scaled to the length in y direction
  ComplexFeatureStructureEntry<Point2d> axisY;
  // Angle of x-axis
  FeatureStructureEntry<double> alpha;
  // Rotation of 3D pose
  ComplexFeatureStructureEntry<Mat> rotation;
  // Translation of 3D pose
  ComplexFeatureStructureEntry<Mat> translation;
  // Length in x direction in 3D space
  FeatureStructureEntry<double> lengthX;
  // Length in y direction in 3D space
  FeatureStructureEntry<double> lengthY;

  Segment(const Segment &other) :
      Annotation(other)
  {
    initFields();
  }

  Segment(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Response : public Annotation
{
private:
  void initFields()
  {
    classifier.init(this, "classifier");
    response.init(this, "response");
    distances.init(this, "distances");
    classNames.init(this, "classNames");
  }
public:
  // Name of the classifier
  FeatureStructureEntry<std::string> classifier;
  // Respones for each descriptor
  ComplexFeatureStructureEntry<Mat> response;
  // Distances to the k nearest neighbors
  ComplexFeatureStructureEntry<Mat> distances;
  // Names of the classes for the response
  ArrayFeatureStructureEntry<std::string> classNames;

  Response(const Response &other) :
      Annotation(other)
  {
    initFields();
  }

  Response(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Tracking : public Annotation
{
private:
  void initFields()
  {
    trackingID.init(this, "trackingID");
    annotatorID.init(this, "annotatorID");
  }
public:
  // No description given
  FeatureStructureEntry<INT64> trackingID;
  // A string that identifying the annotator which created the tracking annotation
  FeatureStructureEntry<std::string> annotatorID;

  Tracking(const Tracking &other) :
      Annotation(other)
  {
    initFields();
  }

  Tracking(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class SemanticColor : public Annotation
{
private:
  void initFields()
  {
    color.init(this, "color");
    ratio.init(this, "ratio");
  }
public:
  // No description given
  ListFeatureStructureEntry<std::string> color;
  // No description given
  ListFeatureStructureEntry<float> ratio;

  SemanticColor(const SemanticColor &other) :
      Annotation(other)
  {
    initFields();
  }

  SemanticColor(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Varius geomoetric information about clusters, e.g. Size(semantic), Bounding Box, Pose
 */
class Geometry : public Annotation
{
private:
  void initFields()
  {
    camera.init(this, "camera");
    world.init(this, "world");
    boundingBox.init(this, "boundingBox");
    size.init(this, "size");
    distanceToPlane.init(this, "distanceToPlane");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<StampedPose> camera;
  // No description given
  ComplexFeatureStructureEntry<StampedPose> world;
  // No description given
  ComplexFeatureStructureEntry<BoundingBox3D> boundingBox;
  // No description given
  FeatureStructureEntry<std::string> size;
  // No description given
  FeatureStructureEntry<double> distanceToPlane;

  Geometry(const Geometry &other) :
      Annotation(other)
  {
    initFields();
  }

  Geometry(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Handles
 */
class HandleAnnotation : public Annotation
{
private:
  void initFields()
  {
    pose.init(this, "pose");
    name.init(this, "name");
    indices.init(this, "indices");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<StampedPose> pose;
  // No description given
  FeatureStructureEntry<std::string> name;
  // No description given
  ComplexFeatureStructureEntry<PointIndices> indices;

  HandleAnnotation(const HandleAnnotation &other) :
      Annotation(other)
  {
    initFields();
  }

  HandleAnnotation(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class ClassConfidence : public Annotation
{
private:
  void initFields()
  {
    name.init(this, "name");
    score.init(this, "score");
  }
public:
  // No description given
  FeatureStructureEntry<std::string> name;
  // No description given
  FeatureStructureEntry<float> score;

  ClassConfidence(const ClassConfidence &other) :
      Annotation(other)
  {
    initFields();
  }

  ClassConfidence(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class NamedLink : public Annotation
{
private:
  void initFields()
  {
    name.init(this, "name");
    url.init(this, "url");
  }
public:
  // No description given
  FeatureStructureEntry<std::string> name;
  // No description given
  FeatureStructureEntry<std::string> url;

  NamedLink(const NamedLink &other) :
      Annotation(other)
  {
    initFields();
  }

  NamedLink(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class ColorHistogram : public Annotation
{
private:
  void initFields()
  {
    hist.init(this, "hist");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<Mat> hist;

  ColorHistogram(const ColorHistogram &other) :
      Annotation(other)
  {
    initFields();
  }

  ColorHistogram(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Type for holding Bilateral Symmetry
 */
class BilateralSymmetry : public Annotation
{
private:
  void initFields()
  {
    origin.init(this, "origin");
    normal.init(this, "normal");
    support.init(this, "support");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<Point3f> origin;
  // No description given
  ComplexFeatureStructureEntry<Point3f> normal;
  // No description given
  ArrayFeatureStructureEntry<int> support;

  BilateralSymmetry(const BilateralSymmetry &other) :
      Annotation(other)
  {
    initFields();
  }

  BilateralSymmetry(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class PoseAnnotation : public Annotation
{
private:
  void initFields()
  {
    camera.init(this, "camera");
    world.init(this, "world");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<StampedPose> camera;
  // No description given
  ComplexFeatureStructureEntry<StampedPose> world;

  PoseAnnotation(const PoseAnnotation &other) :
      Annotation(other)
  {
    initFields();
  }

  PoseAnnotation(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Detection : public Annotation
{
private:
  void initFields()
  {
    name.init(this, "name");
    confidence.init(this, "confidence");
  }
public:
  // No description given
  FeatureStructureEntry<std::string> name;
  // No description given
  FeatureStructureEntry<float> confidence;

  Detection(const Detection &other) :
      Annotation(other)
  {
    initFields();
  }

  Detection(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Type for holding Rotational Symmetry
 */
class RotationalSymmetry : public Annotation
{
private:
  void initFields()
  {
    origin.init(this, "origin");
    orientation.init(this, "orientation");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<Point3f> origin;
  // No description given
  ComplexFeatureStructureEntry<Point3f> orientation;

  RotationalSymmetry(const RotationalSymmetry &other) :
      Annotation(other)
  {
    initFields();
  }

  RotationalSymmetry(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Shape : public Annotation
{
private:
  void initFields()
  {
    shape.init(this, "shape");
    confidence.init(this, "confidence");
  }
public:
  // No description given
  FeatureStructureEntry<std::string> shape;
  // No description given
  FeatureStructureEntry<float> confidence;

  Shape(const Shape &other) :
      Annotation(other)
  {
    initFields();
  }

  Shape(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Classification : public Annotation
{
private:
  void initFields()
  {
    classification_type.init(this, "classification_type");
    classname.init(this, "classname");
    featurename.init(this, "featurename");
    classifier.init(this, "classifier");
    parameters.init(this, "parameters");
    model.init(this, "model");
    confidences.init(this, "confidences");
  }
public:
  // INSTANCE or CLASS or SHAPE
  FeatureStructureEntry<std::string> classification_type;
  // Most probable class/best result
  FeatureStructureEntry<std::string> classname;
  // feature used for classification
  FeatureStructureEntry<std::string> featurename;
  // classifier used(SVM, RF etc)
  FeatureStructureEntry<std::string> classifier;
  // parameters of the trained classifiers, preferably as a json string
  FeatureStructureEntry<std::string> parameters;
  // name of trained model(dataset/preprocessing/every5th etc.)
  FeatureStructureEntry<std::string> model;
  // probabilities for each class
  ListFeatureStructureEntry<ClassConfidence> confidences;

  Classification(const Classification &other) :
      Annotation(other)
  {
    initFields();
  }

  Classification(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Type for holding GroundTruth
 */
class GroundTruth : public Annotation
{
private:
  void initFields()
  {
    pose.init(this, "pose");
    classificationGT.init(this, "classificationGT");
    planeGT.init(this, "planeGT");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<StampedPose> pose;
  // No description given
  ComplexFeatureStructureEntry<Classification> classificationGT;
  // No description given
  ComplexFeatureStructureEntry<Plane> planeGT;

  GroundTruth(const GroundTruth &other) :
      Annotation(other)
  {
    initFields();
  }

  GroundTruth(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * Segment supposed to be transparent
 */
class TransparentSegment : public Annotation
{
private:
  void initFields()
  {
    segment.init(this, "segment");
    source.init(this, "source");
  }
public:
  // No description given
  ComplexFeatureStructureEntry<Segment> segment;
  // No description given
  FeatureStructureEntry<std::string> source;

  TransparentSegment(const TransparentSegment &other) :
      Annotation(other)
  {
    initFields();
  }

  TransparentSegment(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class CylindricalShape : public Shape
{
private:
  void initFields()
  {
  }
public:

  CylindricalShape(const CylindricalShape &other) :
      Shape(other)
  {
    initFields();
  }

  CylindricalShape(uima::FeatureStructure fs) :
      Shape(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Features : public Annotation
{
private:
  void initFields()
  {
    descriptors.init(this, "descriptors");
    response.init(this, "response");
    descriptorType.init(this, "descriptorType");
  }
public:
  // Descriptors of the key points
  ComplexFeatureStructureEntry<Mat> descriptors;
  // Responses of classifier(legacy)
  ListFeatureStructureEntry<Response> response;
  // Type of the descriptor, e.g. binary, numerical
  FeatureStructureEntry<std::string> descriptorType;

  Features(const Features &other) :
      Annotation(other)
  {
    initFields();
  }

  Features(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

/*
 * No description given
 */
class Goggles : public Annotation
{
private:
  void initFields()
  {
    category.init(this, "category");
    title.init(this, "title");
    bbox.init(this, "bbox");
    links.init(this, "links");
    preview_link.init(this, "preview_link");
  }
public:
  // No description given
  FeatureStructureEntry<std::string> category;
  // No description given
  FeatureStructureEntry<std::string> title;
  // No description given
  ArrayFeatureStructureEntry<float> bbox;
  // No description given
  ListFeatureStructureEntry<NamedLink> links;
  // No description given
  FeatureStructureEntry<std::string> preview_link;

  Goggles(const Goggles &other) :
      Annotation(other)
  {
    initFields();
  }

  Goggles(uima::FeatureStructure fs) :
      Annotation(fs)
  {
    initFields();
  }
};

}

TYPE_TRAIT(rs::MLNAtoms, RS_ANNOTATION_MLNATOMS)
TYPE_TRAIT(rs::SemanticSize, RS_ANNOTATION_SEMANTICSIZE)
TYPE_TRAIT(rs::ARMarker, RS_ANNOTATION_ARMARKER)
TYPE_TRAIT(rs::Board, RS_ANNOTATION_BOARD)
TYPE_TRAIT(rs::TFLocation, RS_ANNOTATION_TFLOCATION)
TYPE_TRAIT(rs::Plane, RS_ANNOTATION_PLANE)
TYPE_TRAIT(rs::GraspAnnotation, RS_ANNOTATION_GRASPANNOTATION)
TYPE_TRAIT(rs::ClusterPart, RS_ANNOTATION_CLUSTERPART)
TYPE_TRAIT(rs::Segment, RS_ANNOTATION_SEGMENT)
TYPE_TRAIT(rs::Response, RS_ANNOTATION_RESPONSE)
TYPE_TRAIT(rs::Tracking, RS_ANNOTATION_TRACKING)
TYPE_TRAIT(rs::SemanticColor, RS_ANNOTATION_SEMANTICCOLOR)
TYPE_TRAIT(rs::Geometry, RS_ANNOTATION_GEOMETRY)
TYPE_TRAIT(rs::HandleAnnotation, RS_ANNOTATION_HANDLEANNOTATION)
TYPE_TRAIT(rs::ClassConfidence, RS_ANNOTATION_CLASSCONFIDENCE)
TYPE_TRAIT(rs::NamedLink, RS_ANNOTATION_NAMEDLINK)
TYPE_TRAIT(rs::ColorHistogram, RS_ANNOTATION_COLORHISTOGRAM)
TYPE_TRAIT(rs::BilateralSymmetry, RS_ANNOTATION_BILATERALSYMMETRY)
TYPE_TRAIT(rs::PoseAnnotation, RS_ANNOTATION_POSEANNOTATION)
TYPE_TRAIT(rs::Detection, RS_ANNOTATION_DETECTION)
TYPE_TRAIT(rs::RotationalSymmetry, RS_ANNOTATION_ROTATIONALSYMMETRY)
TYPE_TRAIT(rs::Shape, RS_ANNOTATION_SHAPE)
TYPE_TRAIT(rs::Classification, RS_ANNOTATION_CLASSIFICATION)
TYPE_TRAIT(rs::GroundTruth, RS_ANNOTATION_GROUNDTRUTH)
TYPE_TRAIT(rs::TransparentSegment, RS_ANNOTATION_TRANSPARENTSEGMENT)
TYPE_TRAIT(rs::CylindricalShape, RS_ANNOTATION_CYLINDRICALSHAPE)
TYPE_TRAIT(rs::Features, RS_ANNOTATION_FEATURES)
TYPE_TRAIT(rs::Goggles, RS_ANNOTATION_GOGGLES)

#endif /* __ANNOTATION_TYPES_H__ */
