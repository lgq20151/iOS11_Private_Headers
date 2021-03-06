/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKModifyStrokesCommand : PKUndoCommand {
    PKUndoCheckPoint * _checkPoint;
    bool  _hide;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    NSArray * _strokes;
    bool  _toggleHide;
}

@property (nonatomic, readonly) PKUndoCheckPoint *checkPoint;
@property (nonatomic, readonly) bool hide;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) bool toggleHide;
@property (nonatomic, readonly) NSArray *visibleStrokes;

+ (id)commandForAddingStroke:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)commandForAddingStrokes:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;
+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;
+ (id)commandForMovingStrokes:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;

- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)checkPoint;
- (id)description;
- (bool)hide;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(bool)arg4 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(bool)arg4 strokeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 toggleHide:(bool)arg6;
- (id)inverted;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (double)renderCost;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (id)strokes;
- (bool)toggleHide;
- (id)visibleStrokes;

@end
