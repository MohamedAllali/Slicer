
#ifndef __vtkLevelSetMeshEvolver_h
#define __vtkLevelSetMeshEvolver_h

#include "vtkPolyDataAlgorithm.h"

class vtkLevelSetMeshEvolver : public vtkPolyDataAlgorithm
{
public:
  vtkTypeRevisionMacro( vtkLevelSetMeshEvolver, vtkPolyDataAlgorithm);
  void PrintSelf(ostream& os, vtkIndent indent);

  // Description:
  // Default <TODO>
  static vtkLevelSetMeshEvolver *New();

  // Description:
  //  Macro for ... ?
  //vtkSetClampMacro( SomeParam,double,0.0,1.0);
  //vtkGetMacro( SomeParam,double);

  // Description:
  // Specify the number of iterations for Laplacian smoothing,
  //vtkSetClampMacro(NumberOfIterations,int,0,VTK_LARGE_INTEGER);
  //vtkGetMacro(NumberOfIterations,int);

  // Description:
  // Specify t..
//  vtkSetMacro(RelaxationFactor,double);
 // vtkGetMacro(RelaxationFactor,double);

  // Description:
  // Turn on/off ....
  //vtkSetMacro(FeatureEdgeSmoothing,int);
  //vtkGetMacro(FeatureEdgeSmoothing,int);
  //vtkBooleanMacro(FeatureEdgeSmoothing,int);

  // Description:
  // Specify the source object ... not needed ??
  void SetSource(vtkPolyData *source);
  vtkPolyData *GetSource();
  
protected:
  vtkLevelSetMeshEvolver();
  ~vtkLevelSetMeshEvolver() {};

  virtual int RequestData(vtkInformation *, vtkInformationVector **, vtkInformationVector *);
  virtual int FillInputPortInformation(int port, vtkInformation *info);

private:
  vtkLevelSetMeshEvolver(const vtkLevelSetMeshEvolver&);  // Not implemented.
  void operator=(const vtkLevelSetMeshEvolver&);  // Not implemented.
};

#endif

