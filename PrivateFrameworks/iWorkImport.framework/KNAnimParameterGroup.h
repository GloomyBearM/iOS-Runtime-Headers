/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableDictionary, NSString;

@interface KNAnimParameterGroup : NSObject {
    NSString *_fileName;
    NSString *_name;
    NSString *_originalFileName;
    NSArray *_parameterArray;
    NSMutableDictionary *_parametersDict;
}

@property(readonly) NSString * name;
@property(readonly) NSArray * parameterArray;

+ (id)parameterGroupForFile:(id)arg1;

- (void)dealloc;
- (id)initWithFileName:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(bool)arg2;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1;
- (id)name;
- (id)parameterArray;
- (void)readAnimationCurvesFromFile;
- (void)resetAnimationCurvesFromBundle;
- (double)valueForAnimationCurve:(id)arg1 atPercent:(double)arg2;
- (double)valueForConstant:(id)arg1;
- (void)writeAnimationCurvesToFile;

@end