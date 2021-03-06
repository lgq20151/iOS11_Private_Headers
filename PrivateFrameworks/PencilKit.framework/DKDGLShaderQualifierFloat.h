/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface DKDGLShaderQualifierFloat : DKDGLShaderQualifier {
    float  _GLfloatValue;
    float  _proposedGLfloatValue;
}

@property (nonatomic, readonly) float GLfloatValue;
@property (nonatomic) float proposedGLfloatValue;

- (float)GLfloatValue;
- (id)description;
- (float)proposedGLfloatValue;
- (void)setGLUniformWithShader:(id)arg1;
- (void)setProposedGLfloatValue:(float)arg1;

@end
