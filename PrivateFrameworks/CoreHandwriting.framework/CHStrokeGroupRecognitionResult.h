/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying> {
    NSDictionary * __languageFitnessByLocale;
    NSDictionary * __recognitionResultsByLocale;
    CHDrawing * _inputDrawing;
    NSArray * _inputDrawingCutPoints;
    NSArray * _inputStrokeIdentifiers;
}

@property (nonatomic, readonly, copy) NSDictionary *_languageFitnessByLocale;
@property (nonatomic, readonly, copy) NSDictionary *_recognitionResultsByLocale;
@property (nonatomic, readonly, retain) CHDrawing *inputDrawing;
@property (nonatomic, readonly, copy) NSArray *inputDrawingCutPoints;
@property (nonatomic, readonly, copy) NSArray *inputStrokeIdentifiers;

+ (id)sortedLocales:(id)arg1 byLanguageFitness:(id)arg2;

- (id)_languageFitnessByLocale;
- (id)_recognitionResultsByLocale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double*)arg2;
- (id)init;
- (id)initWithResultsByLocale:(id)arg1 languageFitnessByLocale:(id)arg2 inputStrokeIdentifiers:(id)arg3;
- (id)initWithResultsByLocale:(id)arg1 languageFitnessByLocale:(id)arg2 inputStrokeIdentifiers:(id)arg3 inputDrawing:(id)arg4 inputDrawingCutPoints:(id)arg5;
- (id)inputDrawing;
- (id)inputDrawingCutPoints;
- (id)inputStrokeIdentifiers;
- (float)languageFitnessForLocale:(id)arg1;
- (id)recognitionResultsForLocale:(id)arg1;

@end