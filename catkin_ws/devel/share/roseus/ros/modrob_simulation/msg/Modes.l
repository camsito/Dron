;; Auto-generated. Do not edit!


(when (boundp 'modrob_simulation::Modes)
  (if (not (find-package "MODROB_SIMULATION"))
    (make-package "MODROB_SIMULATION"))
  (shadow 'Modes (find-package "MODROB_SIMULATION")))
(unless (find-package "MODROB_SIMULATION::MODES")
  (make-package "MODROB_SIMULATION::MODES"))

(in-package "ROS")
;;//! \htmlinclude Modes.msg.html


(defclass modrob_simulation::Modes
  :super ros::object
  :slots (_configurable_mode _angle_mode ))

(defmethod modrob_simulation::Modes
  (:init
   (&key
    ((:configurable_mode __configurable_mode) nil)
    ((:angle_mode __angle_mode) nil)
    )
   (send-super :init)
   (setq _configurable_mode __configurable_mode)
   (setq _angle_mode __angle_mode)
   self)
  (:configurable_mode
   (&optional __configurable_mode)
   (if __configurable_mode (setq _configurable_mode __configurable_mode)) _configurable_mode)
  (:angle_mode
   (&optional __angle_mode)
   (if __angle_mode (setq _angle_mode __angle_mode)) _angle_mode)
  (:serialization-length
   ()
   (+
    ;; bool _configurable_mode
    1
    ;; bool _angle_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _configurable_mode
       (if _configurable_mode (write-byte -1 s) (write-byte 0 s))
     ;; bool _angle_mode
       (if _angle_mode (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _configurable_mode
     (setq _configurable_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _angle_mode
     (setq _angle_mode (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get modrob_simulation::Modes :md5sum-) "309b86b842890ede800f6b6fd95ff78c")
(setf (get modrob_simulation::Modes :datatype-) "modrob_simulation/Modes")
(setf (get modrob_simulation::Modes :definition-)
      "# this variable declares whether we are inside the configurable state or not
bool configurable_mode
# this variable declares wheather torque mode or joint angles. True means we are using joint angles
bool angle_mode

")



(provide :modrob_simulation/Modes "309b86b842890ede800f6b6fd95ff78c")

