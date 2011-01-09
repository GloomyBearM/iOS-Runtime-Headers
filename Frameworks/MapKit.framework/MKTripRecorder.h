/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSDate, NSMutableString;



@interface MKTripRecorder : NSObject 
{
    NSMutableString *_buffer;
    BOOL _isRecording;
    NSDate *_startDate;
    NSDate *_lastRecordingDate;
    NSDate *_timeStampDate;
}

@property(retain) NSMutableString *buffer;
@property(retain) NSDate *lastRecordingDate;
@property(retain) NSDate *startDate;
@property BOOL isRecording;
@property(retain) NSDate *timeStampDate;


- (void)stop;
- (void)_writeVersion;
- (void)addAbsoluteTimeCommentIfNeeded;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)lastRecordingDate;
- (void)setLastRecordingDate:(id)arg1;
- (void)setIsRecording:(BOOL)arg1;
- (id)timeStampDate;
- (void)setTimeStampDate:(id)arg1;
- (void)writeTripToPath:(id)arg1;
- (void)recordLocation:(id)arg1;
- (void)recordError:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)start;
- (void)dealloc;
- (BOOL)isRecording;

@end